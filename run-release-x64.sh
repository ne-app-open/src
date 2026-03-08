#! /bin/sh

cd src/
cd kernel/
./scripts/setup_x64_project.sh
./scripts/modules_ahci_x64.sh
./scripts/release_ahci_x64.sh

