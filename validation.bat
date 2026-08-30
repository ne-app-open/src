@echo off

:: To be used for curl -fsSL https://setup.nekernel.org

echo "==> NE.APP: WELCOME TO THE NESYSTEM VALIDATION INSTALLER."
echo "==> NE.APP: INSTALLING DISTRIBUTION..."
echo "==> NEW: ANT IS NOW AVAILABLE AS A STANDALONE OS DISTRIBUTION AND SDK."

echo "==> COMING SOON: ANT AND NESYSTEM DRIVERS REPOSITORY WILL SOON BE AVAILABLE."

set ARCH=x64
set PROFILE=release-efi-pc

set SRC=src
set KRNL=krnl
set NEBUILD=bld
set VCS=git
set FLAGS=clone
set DIST=src-%ARCH%-%PROFILE%

mkdir %DIST%

%VCS% %FLAGS% https://github.com/ne-app-open/%SRC%.git -b validation %DIST%\%SRC%
%VCS% %FLAGS% https://github.com/ne-app-open/%KRNL%.git -b validation %DIST%\%KRNL%

:: Build system has to be stable.
%VCS% %FLAGS% https://github.com/ne-app-open/%NEBUILD%.git -b stable %DIST%\%NEBUILD%

cd %DIST%

echo "==> DONE."
