@echo off

echo "==> NE.APP: WELCOME TO THE NESYSTEM INSTALLER."
echo "==> NE.APP: INSTALLING DISTRIBUTION..."

echo "==> COMING SOON: THE NESYSTEM WILL SOON BE AVAILABLE AS AN API-FIRST EXPERIENCE."

:: To be used for curl -fsSL https://setup.nekernel.org

set ARCH=x64
set PROFILE=release-efi-pc

set SRC=src
set KRNL=krnl
set NEBUILD=bld
set NECTAR=ncc
set VCS=git
set FLAGS=clone --recurse-submodules -j8
set DIST=src-%ARCH%-%PROFILE%

mkdir %DIST%

%VCS% %FLAGS% https://github.com/ne-app-eu/%SRC%.git %DIST%\%SRC%
%VCS% %FLAGS% https://github.com/ne-app-eu/%KRNL%.git %DIST%\%KRNL%
%VCS% %FLAGS% https://github.com/ne-app-eu/%NEBUILD%.git %DIST%\%NEBUILD%
%VCS% %FLAGS% https://github.com/ne-app-eu/%NECTAR%.git %DIST%\%NECTAR%

cd src

echo "==> DONE."
