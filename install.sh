#! /bin/sh

## To be used for curl -fsSL https://install.nekernel.org | sh

echo "==> NE.APP: WELCOME TO THE NESYSTEM INSTALLER."
echo "==> NE.APP: INSTALLING DISTRIBUTION..."

echo "==> COMING SOON: THE NESYSTEM WILL SOON BE AVAILABLE AS AN API-FIRST EXPERIENCE."

ARCH=x64
PROFILE=release-efi-pc

SRC=src
KRNL=krnl
NEBUILD=bld
NECTAR=ncc
VCS=git
FLAGS=clone --recurse-submodules -j8
DIST=src-${ARCH}-${PROFILE}

mkdir ${DIST}

${GIT} ${FLAGS} https://github.com/ne-foss/${SRC}.git ${DIST}/${SRC}
${GIT} ${FLAGS} https://github.com/ne-foss/${KRNL}.git ${DIST}/${KRNL}
${GIT} ${FLAGS} https://github.com/ne-foss/${NEBUILD}.git ${DIST}/${NEBUILD}
${GIT} ${FLAGS} https://github.com/ne-foss/${NECTAR}.git ${DIST}/${NECTAR}
