package ChangeLogEntry;

# ************************************************************
# Description   : Create a ChangeLog entry based on modified files.
# Author        : Chad Elliott
# Create Date   : 6/18/2002
# $Id$
# ************************************************************

# ************************************************************
# Pragmas
# ************************************************************

use strict;
use File::Basename;

use FileLocatorFactory;

# ************************************************************
# Subroutine Section
# ************************************************************

sub new {
  my($class) = shift;
  my($name)  = shift;
  my($email) = shift;
  my($self)  = bless {'name'  => $name,
                      'email' => $email,
                     }, $class;
  return $self;
}


sub escape_regex_special {
  my($self) = shift;
  my($name) = shift;

  $name =~ s/([\+\-\\\$\[\]\(\)\.])/\\$1/g;
  return $name;
}


sub sortFileList {
  my($self) = shift;
  return sort {
           if ($a =~ /\.h$/) {
             my($base) = $a;
             $base =~ s/\.h//;
             $base = $self->escape_regex_special($base);
             if ($b =~ /^$base\./) {
               return -1;
             }
             else {
               return $a cmp $b;
             }
           }
           elsif ($a =~ /\.i(nl)?$/) {
             my($base) = $a;
             $base =~ s/\.i(nl)?$//;
             $base = $self->escape_regex_special($base);
             if ($b =~ /^$base\.cpp/) {
               return -1;
             }
             else {
               return $a cmp $b;
             }
           }
           elsif ($a =~ /\.cpp?$/) {
             my($base) = $a;
             $base =~ s/\.cpp?$//;
             $base = $self->escape_regex_special($base);
             if ($b =~ /^$base\./) {
               return 1;
             }
             else {
               return $a cmp $b;
             }
           }
           return $a cmp $b;
         } @_;
}


sub create {
  my($self) = shift;
  my($dirref) = shift;
  my($baserev) = shift;
  my(@dirs) = @$dirref;
  my($fl) = FileLocatorFactory::create();

  if ($baserev) {
    if (!$fl->has_log()) {
      return undef, undef, "FileLocator $fl doesn't support the -m cle option";
    }

    my($error, @entries) = $fl->log($baserev, @dirs);
    if ($error) {
      return undef, undef, $error;
    }

    my($result);
    for my $entry (@entries) {
      my(@formatted) = $self->format($entry->{timestamp}, $entry->{modified},
				     $entry->{removed}, $entry->{conflicts},
				     $self->{unknown}, undef, 1);
      $result .= $formatted[0];
      for my $line (@{$entry->{comment}}) {
	if ($line ne '') {
	  $result .= ' ' x 10 . $line;
	}
	$result .= "\n";
      }
      $result .= "\n";
    }

    return $result, undef, undef;
  }
  else {
    my($modif,
       $remov,
       $confl,
       $unknown,
       $error) = $fl->locate(@dirs);
    my($entry) = scalar(gmtime());
    return $self->format($entry, $modif, $remov, $confl, $unknown, $error);
  }
}

sub format {
  my($self) = shift;
  my($entry) = shift;
  my($modif) = shift;
  my($remov) = shift;
  my($confl) = shift;
  my($unknown) = shift;
  my($error) = shift;
  my($noblanks) = shift;

  if (defined $$confl[0]) {
    $entry = "ERROR: The following files have conflicts:\n";
    foreach my $file (@$confl) {
      $entry .= "$file\n";
    }
  }
  else {
    my($prefix) = '        * ';

    ## Correct the timezone (if there is any)
    my($tz) = 'UTC';
    $entry =~ s/(:\d\d\s+)(.*)(\d\d\d\d)$/$1$tz $3/;

    ## Add the name and email address
    $entry .= "  $self->{'name'}  <$self->{'email'}>\n\n";

    my($previous) = undef;
    foreach my $file ($self->sortFileList(@$modif)) {
      my($directory) = dirname($file);
      if (defined $previous && $previous ne $directory && !$noblanks) {
        $entry .= "\n";
      }
      $entry .= "$prefix$file:\n";
      $previous = $directory;
    }
    $previous = '';
    my($removed) = 0;
    foreach my $file ($self->sortFileList(@$remov)) {
      my($directory) = dirname($file);
      if (defined $previous && $previous ne $directory && !$noblanks) {
        $entry .= "\n";
      }
      $entry   .= "$prefix$file:\n";
      $previous = $directory;
      $removed++;
    }
    if ($removed) {
      $entry .= "\n          Removed " .
                ($removed > 1 ? 'these files' : 'this file') . ".\n";
    }
    $entry .= "\n";
  }

  if (!defined $$modif[0] && !defined $$remov[0]) {
    $entry = undef;
  }

  return $entry, $unknown, $error;
}


1;
