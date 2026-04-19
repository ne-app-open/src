@echo off

echo "==> WELCOME TO THE NESYSTEM INSTALLER."
echo "==> INSTALLING NESYSTEM..."

:: To be used for: curl -fsSL https://setup.nekernel.org

ARCH=x64
PROFILE=release

git clone --recurse-submodules -j8 https://github.com/ne-foss/ne-system.git
cd ne-system
git submodule update --init
set UPDATER_NO_COMMIT=1
./updater.sh
