#! /bin/sh

## To be used for curl -fsSL https://install.nekernel.org | sh

echo "==> NE.APP: WELCOME TO THE NESYSTEM INSTALLER."
echo "==> NE.APP: INSTALLING DISTRIBUTION..."

ARCH=x64
PROFILE=release-efi-pc

SRC=src
KRNL=krnl
NEBUILD=bld
NECTAR=ncc
FLAGS=clone --recurse-submodules -j8
DIST=src-${ARCH}-${PROFILE}
GIT=git

mkdir ${DIST}

${GIT} ${FLAGS} https://github.com/ne-app-eu/${SRC}.git ${DIST}/${SRC}
${GIT} ${FLAGS} https://github.com/ne-app-eu/${KRNL}.git ${DIST}/${KRNL}
${GIT} ${FLAGS} https://github.com/ne-app-eu/${NEBUILD}.git ${DIST}/${NEBUILD}
${GIT} ${FLAGS} https://github.com/ne-app-eu/${NECTAR}.git ${DIST}/${NECTAR}
