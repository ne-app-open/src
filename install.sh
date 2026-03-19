#! /bin/sh

## To be used for: curl -fsSL https://install.nekernel.org | sh

ARCH=x64
PROFILE=debug

git clone --recurse-submodules -j8 git@github.com:ne-foss-org/ne-system.git
cd ne-system
./updater.sh
./run-$(PROFILE)-$(ARCH).sh



