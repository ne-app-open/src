@echo off

echo "==> NE.APP: WELCOME TO THE NESYSTEM INSTALLER."
echo "==> NE.APP: INSTALLING DISTRIBUTION..."

:: To be used for curl -fsSL https://setup.nekernel.org

set ARCH=x64
set PROFILE=release-efi-pc

set SRC=src
set KRNL=krnl
set NEBUILD=bld
set NECTAR=nectar
set GIT=git
set FLAGS=clone --recurse-submodules -j8
set DIST=src-%ARCH%-%PROFILE%

mkdir %DIST%

%GIT% %FLAGS% https://github.com/ne-foss/%SRC%.git %DIST%\%SRC%
%GIT% %FLAGS% https://github.com/ne-foss/%KRNL%.git %DIST%\%KRNL%
%GIT% %FLAGS% https://github.com/ne-foss/%NEBUILD%.git %DIST%\%NEBUILD%
%GIT% %FLAGS% https://github.com/ne-foss/%NECTAR%.git %DIST%\%NECTAR%

cd src

echo "==> DONE."
