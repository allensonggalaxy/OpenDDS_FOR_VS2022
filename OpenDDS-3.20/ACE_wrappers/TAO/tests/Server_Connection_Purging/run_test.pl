eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
     & eval 'exec perl -S $0 $argv:q'
     if 0;

# $Id$
# -*- perl -*-

use lib "$ENV{ACE_ROOT}/bin";
use PerlACE::TestTarget;

$status = 0;
$debug_level = '0';

foreach $i (@ARGV) {
    if ($i eq '-debug') {
        $debug_level = '10';
    }
}

my $server = PerlACE::TestTarget::create_target (1) || die "Create target 1 failed\n";
my $client = PerlACE::TestTarget::create_target (2) || die "Create target 2 failed\n";
my $client_shutdown = PerlACE::TestTarget::create_target (3) || die "Create target 3 failed\n";


$orb_port = $server->RandomPort();

my $iorbase = "server.ior";
my $server_iorfile = $server->LocalFile ($iorbase);
my $client_shutdown_iorfile = $client_shutdown->LocalFile ($iorbase);
$server->DeleteFile($iorbase);
$client_shutdown->DeleteFile($iorbase);

$hostname = $server->HostName();

$SV = $server->CreateProcess ("server",
                              "-ORBdebuglevel $debug_level " .
                              "-ORBEndpoint iiop://$hostname:$orb_port " .
                              "-o $server_iorfile");

$CL = $client->CreateProcess ("client",
                              "-h $hostname " .
                              "-p $orb_port");

$SH_CL = $client_shutdown->CreateProcess ("shutdown_client", "-k file://$client_shutdown_iorfile");

print STDERR $CL->CommandLine(), "\n" ;

$server_status = $SV->Spawn ();

if ($server_status != 0) {
    print STDERR "ERROR: server returned $server_status\n";
    exit 1;
}

if ($server->WaitForFileTimed ($iorbase,
                               $server->ProcessStartWaitInterval()) == -1) {
    print STDERR "ERROR: cannot find file <$server_iorfile>\n";
    $SV->Kill (); $SV->TimedWait (1);
    exit 1;
}

if ($server->GetFile ($iorbase) == -1) {
    print STDERR "ERROR: cannot retrieve file <$server_iorfile>\n";
    $SV->Kill (); $SV->TimedWait (1);
    exit 1;
}
if ($client_shutdown->PutFile ($iorbase) == -1) {
    print STDERR "ERROR: cannot set file <$client_shutdown_iorfile>\n";
    $SV->Kill (); $SV->TimedWait (1);
    exit 1;
}

$client_status = $CL->SpawnWaitKill ($client->ProcessStartWaitInterval() + 285);

if ($client_status != 0) {
    print STDERR "ERROR: client returned $client_status\n";
    $status = 1;
}

print "Calling shutdown client\n";

$client_status = $SH_CL->SpawnWaitKill ($client_shutdown->ProcessStartWaitInterval() + 285);

if ($client_status != 0) {
    print STDERR "ERROR: client shutdown returned $client_status\n";
    $status = 1;
}

$server_status = $SV->WaitKill ($server->ProcessStopWaitInterval() + 100);

if ($server_status != 0) {
    print STDERR "ERROR: server returned $server_status\n";
    $status = 1;
}

$server->DeleteFile($iorbase);
$client_shutdown->DeleteFile($iorbase);

exit $status;
