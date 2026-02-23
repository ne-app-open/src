#!/usr/bin/perl -w

require './scripts/libconf.pl';

libconf->new();

chdir("./toolchains/mingw-w64-nekernel/") or die "Cannot change directory: $!";

system("configure", "--host=x86_64-w64-mingw32", "--prefix=mingw64-w64-nekernel") or die "Configuration failed: $!";

print("Configuration and build complete.\nUse 'make install' to install the toolchain.\n");
