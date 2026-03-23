#! /bin/sh

## To be used for: curl -fsSL https://install.nekernel.org | sh

ARCH=x64
PROFILE=debug

git clone --recurse-submodules -j8 git@github.com:ne-foss-org/ne-system.git
cd ne-system
export UPDATER_NO_COMMIT=1
./updater.sh
./scripts/setup_x64_project.sh
./scripts/modules_ahci_x64.sh
./scripts/debug_ahci_x64.sh

