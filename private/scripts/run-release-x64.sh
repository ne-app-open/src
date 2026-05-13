#! /bin/sh

cd ${KERNEL_DIR}

./scripts/setup_x64_project.sh
./scripts/modules_ahci_x64.sh
./scripts/release_ahci_x64.sh

