#! /bin/sh

## To be used for curl -fsSL https://install.nekernel.org | sh

echo "==> NE.APP: WELCOME TO THE NESYSTEM CANARY INSTALLER."
echo "==> NE.APP: INSTALLING DISTRIBUTION..."

echo "==> COMING SOON: THE NESYSTEM WILL SOON BE AVAILABLE AS AN API-FIRST EXPERIENCE."
echo "==> COMING SOON: ANTOS WILL SOON BE AVAILABLE AS A STANDALONE OS DISTRIBUTION."

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

${GIT} ${FLAGS} https://github.com/ne-app-eu/${SRC}.git -b stable ${DIST}/${SRC}
${GIT} ${FLAGS} https://github.com/ne-app-eu/${KRNL}.git -b stable ${DIST}/${KRNL}
${GIT} ${FLAGS} https://github.com/ne-app-eu/${NEBUILD}.git -b stable ${DIST}/${NEBUILD}
${GIT} ${FLAGS} https://github.com/ne-app-eu/${NECTAR}.git -b stable ${DIST}/${NECTAR}

cd ${DIST}

echo "==> DONE."