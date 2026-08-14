#! /bin/sh

## To be used for curl -fsSL https://install.nekernel.org | sh

echo "==> NE.APP: WELCOME TO THE NESYSTEM STABLE INSTALLER."
echo "==> NE.APP: INSTALLING DISTRIBUTION..."

echo "==> COMING SOON: ANT IS NOW AVAILABLE AS A STANDALONE OS DISTRIBUTION."
echo "==> COMING SOON: ANT AND NESYSTEM DRIVERS REPOSITORY WILL SOON BE AVAILABLE."

ARCH=x64
PROFILE=release-efi-pc

SRC=src
KRNL=krnl
NEBUILD=bld
NECTAR=ncc
FLAGS=clone
DIST=src-${ARCH}-${PROFILE}
GIT=git

mkdir ${DIST}

${GIT} ${FLAGS} https://github.com/ne-app-eu/${SRC}.git --branch stable ${DIST}/${SRC}
${GIT} ${FLAGS} https://github.com/ne-app-eu/${KRNL}.git --branch stable ${DIST}/${KRNL}
${GIT} ${FLAGS} https://github.com/ne-app-eu/${NEBUILD}.git --branch stable ${DIST}/${NEBUILD}
${GIT} ${FLAGS} https://github.com/ne-app-eu/${NECTAR}.git --branch stable ${DIST}/${NECTAR}

cd ${DIST}

echo "==> DONE."