#!/usr/bin/env perl

use strict;
use warnings;

use FileHandle;
use File::Basename;
use FindBin;

my $this_opendds_root = "$FindBin::RealBin/../..";
my $exit_status = 0;

sub print_heading {
  my $pre_char = shift;
  my $text = shift;
  my $post_char = shift;

  $text = $pre_char x 2 . " $text " . $post_char x 2;
  my $text_len = length($text);
  my $soft_limit = 80;
  if ($text_len < $soft_limit) {
    my $n = ($soft_limit - $text_len) / 2;
    $text = $pre_char x ($n + $text_len % 2) . $text . $post_char x $n;
  }

  print "$text\n";
}

sub show_file {
  my $path = shift;
  my $opts = shift // {};
  my $callback = $opts->{callback};
  my $optional = $opts->{optional};

  return if $optional && !-r $path;

  my $basename = basename($path);
  print_heading('=', ($basename eq 'Version.h') ? "ACE Version" : $basename, '=');
  my $f = new FileHandle($path);
  if (!$f) {
    print "Couldn't open \"$path\": $!\n";
    $exit_status = 1;
    return;
  }
  while (<$f>) {
    print if $basename ne 'Version.h' || /ACE_VERSION /;
    &$callback($_) if $callback;
    last if $basename eq 'VERSION.txt';
  }
  close $f;
}

sub show_config {
  my $setenv = shift;
  my $dds_root = dirname($setenv);
  my $ace_root;
  show_file($setenv, {callback => sub {
    for my $re (qr/"ACE_ROOT=(.*)"$/, qr/ACE_ROOT="(.*)"$/, qr/ACE_ROOT=(.*)$/) {
      if ($_[0] =~ $re) {
        $ace_root = $1;
        last;
      }
    }
  }});
  die "ACE_ROOT not found in setenv" unless $ace_root;
  die "ACE_ROOT in setenv doesn't exist: \"$ace_root\"" unless -d $ace_root;

  my $user_macros = ($dds_root eq '.' ? '' : "$dds_root/") . 'user_macros.GNU';
  show_file($user_macros, {optional => 1});

  my $opendds_version = ($dds_root eq '.' ? '' : "$dds_root/") . 'VERSION.txt';
  show_file($opendds_version);

  show_file("$ace_root/ace/Version.h");

  show_file("$ace_root/bin/MakeProjectCreator/config/default.features", {optional => 1});
  show_file("$ace_root/include/makeinclude/platform_macros.GNU", {optional => 1});
  show_file("$ace_root/ace/config.h");
}

if (-r "$this_opendds_root/setenv.sh") {
  show_config("$this_opendds_root/setenv.sh");
}
elsif (-r "$this_opendds_root/setenv.cmd") {
  show_config('setenv.cmd');
}
elsif (-r "$this_opendds_root/build/host/setenv.sh") {
  print_heading('>', 'Host Build', '<');
  show_config("$this_opendds_root/build/host/setenv.sh");
  print_heading('>', 'Target Build', '<');
  show_config("$this_opendds_root/build/target/setenv.sh");
}
else {
  die "Can't find setenv script that was generated by configure.\n" .
    "Has configure been run yet?\n";
}

exit($exit_status);
