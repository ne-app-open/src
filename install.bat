@echo off

echo "==> WELCOME TO THE NESYSTEM INSTALLER."
echo "==> INSTALLING NESYSTEM..."

:: To be used for: curl -fsSL https://setup.nekernel.org

set ARCH=x64
set PROFILE=release

git clone --recurse-submodules -j8 https://github.com/ne-foss/src.git
git clone --recurse-submodules -j8 https://github.com/ne-foss/ne-kernel.git

cd src

