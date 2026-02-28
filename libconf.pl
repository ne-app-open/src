#!/usr/bin/perl -w

package libconf;

use strict;
use Cwd;

sub new() {

    if ($ENV{USER} ne "root") {
        die "You must be root to run this script.\n";
    }

    system("sh", "git", "submodule", "update", "--init", "--recursive") or die "git: error: $!";

}

sub exit() {

    exit;

}

"libconf";
