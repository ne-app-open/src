@echo off

echo "==> NE.APP: WELCOME TO THE NESYSTEM CANARY INSTALLER."
echo "==> NE.APP: INSTALLING DISTRIBUTION..."

echo "==> COMING SOON: ANT IS NOW AVAILABLE AS A STANDALONE OS DISTRIBUTION."
echo "==> COMING SOON: ANT AND NESYSTEM DRIVERS REPOSITORY WILL SOON BE AVAILABLE."

:: To be used for curl -fsSL https://setup.nekernel.org

set ARCH=x64
set PROFILE=release-efi-pc

set SRC=src
set KRNL=krnl
set NEBUILD=bld
set NECTAR=ncc
set VCS=git
set FLAGS=clone
set DIST=src-%ARCH%-%PROFILE%

mkdir %DIST%

%VCS% %FLAGS% https://github.com/ne-app-open/%SRC%.git %DIST%\%SRC%
%VCS% %FLAGS% https://github.com/ne-app-open/%KRNL%.git %DIST%\%KRNL%
%VCS% %FLAGS% https://github.com/ne-app-open/%NEBUILD%.git %DIST%\%NEBUILD%
:: %VCS% %FLAGS% https://github.com/ne-app-open/%NECTAR%.git %DIST%\%NECTAR%

cd %DIST%

echo "==> DONE."
