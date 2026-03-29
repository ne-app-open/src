#! /bin/sh

## To be used for: curl -fsSL https://install.nekernel.org | sh

echo "==> WELCOME TO NESYSTEM."
echo "==> INSTALLING NESYSTEM..."

sudo apt update
sudo apt install nasm mingw-w64 x86_64-w64-mingw32-g++ x86_64-w64-mingw32-gcc build-essential cmake libboost-dev

ARCH=x64
PROFILE=debug

git clone --recurse-submodules -j8 https://github.com/ne-foss-org/ne-system.git
cd ne-system
git submodule update --init
export UPDATER_NO_COMMIT=1
./updater.sh
./scripts/setup_x64_project.sh
./scripts/modules_ahci_x64.sh
./scripts/debug_ahci_x64.sh

