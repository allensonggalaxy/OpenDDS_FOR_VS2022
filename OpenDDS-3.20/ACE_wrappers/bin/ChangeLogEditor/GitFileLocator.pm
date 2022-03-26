package GitFileLocator;

# ************************************************************
# Description   : Use Git to determine the list of modified files.
# Author        : Adam Mitz
# Create Date   : 4/17/2019
# ************************************************************

# ************************************************************
# Pragmas
# ************************************************************

use strict;
use FileHandle;

use FileLocator;

use vars qw(@ISA);
@ISA = qw(FileLocator);

# ************************************************************
# Subroutine Section
# ************************************************************

sub locate {
  my($self) = shift;
  my(@dirs) = @_;

  my($prefix) = `git rev-parse --show-prefix`;
  chomp $prefix;

  my(@modified) = ();
  my(@removed) = ();
  my(@conflicts) = ();
  my(@unknown) = ();
  my($err) = $self->tmpnam('cle_git.err');
  my($error) = undef;
  my($fh) = new FileHandle();

  if (open($fh, 'git diff --name-status -- ' . "@dirs 2> $err |")) {
    while (<$fh>) {
      my($line) = $_;
      if ($line =~ /^([A-Z])\s+(.*)$/) {
        my($content) = $1;
        my($file) = $2;
        if ($prefix) {
          next unless $file =~ s/^$prefix//;
        }

	$self->classify($content, $file,
			\@modified, \@removed, \@conflicts, \@unknown);
      }
    }
    close($fh);

    $error = $self->process_errors($err);
  }
  else {
    $error = "Unable to run git with error redirection.";
  }

  return \@modified, \@removed, \@conflicts, \@unknown, $error;
}

sub classify {
  my($self) = shift;
  my($content) = shift;
  my($file) = shift;
  my($modified) = shift;
  my($removed) = shift;
  my($conflicts) = shift;
  my($unknown) = shift;

  # A|C|D|M|R|T|U|X|B
  # Added (A), Copied (C), Deleted (D), Modified (M), Renamed (R), 
  # have their type changed (T), Unmerged (U), Unknown (X),
  # have had their pairing Broken (B)

  if ($content eq 'M' || $content eq 'A' || $content eq 'R' ||
      $content eq 'C') {
    push(@$modified, $file);
  }
  elsif ($content eq 'D') {
    push(@$removed, $file);
  }
  elsif ($content eq 'U') {
    push(@$conflicts, $file);
  }
  elsif ($content eq 'X') {
    push(@$unknown, $file);
  }
}

sub has_log {
  return 1;
}

sub log {
  my($self) = shift;
  my($baserev) = shift;
  my(@dirs) = @_;
  if ($#dirs == -1) {
    @dirs = ('.');
  }

  my($prefix) = `git rev-parse --show-prefix`;
  chomp $prefix;

  my($err) = $self->tmpnam('cle_git.err');
  my($error) = undef;
  my($fh) = new FileHandle();
  my($logopts) = '--date=local --pretty=fuller --name-status';
  my($prev_tz) = $ENV{TZ};
  $ENV{TZ} = 'UTC';

  my(@entries) = ();

  if (open($fh, "git log $logopts $baserev.. -- @dirs 2> $err |")) {
    my(@buffer) = ();
    while (<$fh>) {
      my($line) = $_;
      if ($line =~ /^commit /) {
	push(@entries, $self->from_log($prefix, \@buffer)) if $#buffer >= 0;
	@buffer = ();
      }
      else {
	push(@buffer, $line);
      }
    }
    close($fh);
    push(@entries, $self->from_log($prefix, \@buffer)) if $#buffer >= 0;

    $error = $self->process_errors($err);
  }
  else {
    $error = "Unable to run git with error redirection.";
  }

  $ENV{TZ} = $prev_tz;
  return $error, @entries;
}

sub from_log {
  my($self) = shift;
  my($prefix) = shift;
  my($lines) = shift;
  my(%result) = (modified => [], removed => [], conflicts => [], unknown => []);
  for my $line (@$lines) {
    if ($line =~ /CommitDate: (.*)/) {
      $result{timestamp} = $1;
    }
    elsif ($line =~ /^ +(.*) */) {
      push(@{$result{comment}}, $1);
    }
    elsif ($line =~ /^([A-Z])\s+(.*)$/) {
      my($content) = $1;
      my($file) = $2;
      next unless $file =~ s/^$prefix//;
      $self->classify($content, $file, $result{modified}, $result{removed},
		      $result{conflicts}, $result{unknown});
    }
  }
  return \%result;
}

1;
