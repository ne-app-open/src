#! /bin/sh

## To be used for: curl -fsSL https://install.nekernel.org | sh

echo "==> WELCOME TO THE NESYSTEM INSTALLER."
echo "==> INSTALLING NESYSTEM..."

sudo apt update
sudo apt install nasm mingw-w64 x86_64-w64-mingw32-g++ x86_64-w64-mingw32-gcc build-essential cmake libboost-dev

ARCH=x64
PROFILE=release

git clone --recurse-submodules -j8 https://github.com/ne-foss/src.git
git clone --recurse-submodules -j8 https://github.com/ne-foss/ne-kernel.git

cd src

