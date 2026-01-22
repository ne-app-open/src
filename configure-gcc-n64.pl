#!/usr/bin/perl -w

use strict;
use Cwd;

if ($ENV{USER} ne "root") {
    die "You must be root to run this script.\n";
}

system("sh", "git", "submodule", "update", "--init", "--recursive");

chdir("./toolchains/mingw-w64-gcc/") or die "Cannot change directory: $!";

system("configure", "--host=x86_64-w64-mingw32", "--prefix=mingw64-nekernel-gcc") or die "Configuration failed: $!";

print("Configuration and build complete.\nUse 'make install' to install the toolchain.\n");
