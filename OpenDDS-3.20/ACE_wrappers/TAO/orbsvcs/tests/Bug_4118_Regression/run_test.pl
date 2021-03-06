eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
    & eval 'exec perl -S $0 $argv:q'
    if 0;

# $Id$
# -*- perl -*-

# This is a Perl script that runs some Naming Service tests.
# It runs all the tests that will run with min CORBA.
# It starts all the servers and clients as necessary.

use lib "$ENV{ACE_ROOT}/bin";
use PerlACE::TestTarget;
use Cwd;

## Save the starting directory
$status = 0;
$startdir = getcwd();

my $test = PerlACE::TestTarget::create_target (1) || die "Create target 1 failed\n";

# Variables for command-line arguments to client and server
# executables.
$ns_orb_port = 12000 + $test->RandomPort();

$iorfile = "ns.ior";
$persistence_dir = "NameService";

#Files which used by test
my $test_iorfile = $test->LocalFile ($iorfile);

sub cleanup
{
    $test->DeleteFile($iorfile);
    if ( ! -d $persistence_dir ) {
        mkdir ($persistence_dir, 0777);
    }
    else {
        chdir $persistence_dir;
        opendir(THISDIR, ".");
        @allfiles = grep(!/^\.\.?$/, readdir(THISDIR));
        closedir(THISDIR);
        foreach $tmp (@allfiles){
            $test->DeleteFile ($tmp);
        }
        chdir "..";
    }

}

sub start_name_server
{
    my $args = " -o $test_iorfile -ORBCollocation no -n 5 -ORBListenEndpoints iiop://$hostname:$ns_orb_port -u $persistence_dir";
    my $prog = "$startdir/../../Naming_Service/tao_cosnaming";

    $SV = $test->CreateProcess ("$prog", "$args");

    $test->DeleteFile($iorfile);


    $SV->Spawn ();

    if ($test->WaitForFileTimed ($iorfile,
                               $test->ProcessStartWaitInterval()) == -1) {
        print STDERR "ERROR: cannot find file <$test_iorfile>\n";
        $SV->Kill (); $SV->TimedWait (1);
        exit 1;
    }

    sleep(5);
}

sub nsadd
{
    my $args = "--ns file://$test_iorfile "."@_"." ";
    my $prog = "$startdir/../../../utils/nslist/tao_nsadd";

    print STDERR "command line $args\n";

    $CL = $test->CreateProcess ("$prog", "$args");

    $client_status = $CL->SpawnWaitKill ($test->ProcessStartWaitInterval());

    if ($client_status != 0) {
        print STDERR "ERROR: ns_add returned $client_status\n";
        $status = 1;
    }

}

## The options below have been reordered due to a
## initialization problem (within the Naming_Service)
## that has only been seen on Windows XP.

#1. use the tao_nsadd command add a cyclical reference to the root context
#2. use the tao_nsadd command to add a binding that traverses the cycle
#3. verify that step 2 does not hang
#4. clean up old references


# Options for all simple tests recognized by the ns_add program.
@opts = ("--name recurse --ior file://$test_iorfile --ctx",
         "--name recurse/recurse/recurse/dummy --ior file://$test_iorfile");

$hostname = $test->HostName ();

@comments = ("Create naming context cycle: \n",
             "bind reference through cycle:  \n",
             );

$test_number = 0;

print "INFO: Running the test in ", getcwd(), "\n";

cleanup ();
start_name_server ();

foreach $o (@opts) {

    print STDERR "$comments[$test_number]\n";

    nsadd ($o);

    ## For some reason, only on Windows XP, we need to
    ## wait before starting another tao_cosnaming when
    ## the mmap persistence option is used
    if ($^O eq "MSWin32") {
      sleep(1);
    }
    $test_number++;
}

$SV->Kill ();

cleanup ();

rmdir ($persistence_dir);

exit $status;
