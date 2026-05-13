#! /bin/sh

## To be used for: curl -fsSL https://install.nekernel.org | sh

echo "==> NE.APP: WELCOME TO THE NESYSTEM INSTALLER."
echo "==> NE.APP: INSTALLING DISTRIBUTION..."

ARCH=x64
PROFILE=release

SRC=src
KRNL=ne-kernel
NEBUILD=ne-build
NECTAR=nectar

DIST=ne_system-${ARCH}-${PROFILE}

mkdir ${DIST}

git clone --recurse-submodules -j8 https://github.com/ne-foss/${SRC}.git ${DIST}/${SRC}
git clone --recurse-submodules -j8 https://github.com/ne-foss/${KRNL}.git ${DIST}/${KRNL}
git clone --recurse-submodules -j8 https://github.com/ne-foss/${NEBUILD}.git ${DIST}/${NEBUILD}
git clone --recurse-submodules -j8 https://github.com/ne-foss/${NECTAR}.git ${DIST}/${NECTAR}
