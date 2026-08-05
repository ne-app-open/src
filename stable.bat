@echo off

echo "==> NE.APP: WELCOME TO THE NESYSTEM STABLE INSTALLER."
echo "==> NE.APP: INSTALLING DISTRIBUTION..."

echo "==> COMING SOON: THE NESYSTEM WILL SOON BE AVAILABLE AS AN API-FIRST EXPERIENCE."
echo "==> COMING SOON: ANTOS WILL SOON BE AVAILABLE AS A STANDALONE OS DISTRIBUTION."

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

%VCS% %FLAGS% https://github.com/ne-app-eu/%SRC%.git -b stable %DIST%\%SRC%
%VCS% %FLAGS% https://github.com/ne-app-eu/%KRNL%.git -b stable %DIST%\%KRNL%
%VCS% %FLAGS% https://github.com/ne-app-eu/%NEBUILD%.git -b stable %DIST%\%NEBUILD%
%VCS% %FLAGS% https://github.com/ne-app-eu/%NECTAR%.git -b stable %DIST%\%NECTAR%

cd %DIST%

echo "==> DONE."
