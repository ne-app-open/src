@echo off

echo "==> NE.APP: WELCOME TO THE NESYSTEM INSTALLER."
echo "==> NE.APP: INSTALLING DISTRIBUTION..."

:: To be used for: curl -fsSL https://setup.nekernel.org

set ARCH=x64
set PROFILE=release

set SRC=src
set KRNL=krnl
set NEBUILD=bld
set NECTAR=nectar

set DIST=ne_system-%ARCH%-%PROFILE%

mkdir %DIST%

git clone --recurse-submodules -j8 https://github.com/ne-foss/%SRC%.git %DIST%\%SRC%
git clone --recurse-submodules -j8 https://github.com/ne-foss/%KRNL%.git %DIST%\%KRNL%
git clone --recurse-submodules -j8 https://github.com/ne-foss/%NEBUILD%.git %DIST%\%NEBUILD%
git clone --recurse-submodules -j8 https://github.com/ne-foss/%NECTAR%.git %DIST%\%NECTAR%

cd src

echo "==> DONE."
