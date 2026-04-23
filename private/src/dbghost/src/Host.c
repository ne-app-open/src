// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss/ne-system

#include <ne-system/System/NeSystem.h>

struct DBG_HOST {
    SInt32 fDbgSocket;
    SInt32 fDbgType;
    Char fDbgPath[255];
};

static struct DBG_HOST* kDbgHost = nullptr;

int main(void) {
    PrintOut(nullptr, "%s", "Ne.app NeSystem DebugHost.\r");

    kDbgHost = MmCreateHeap(sizeof(struct DBG_HOST), 0);

    if (!kDbgHost) return 1;

    MmDestroyHeap(kDbgHost);
    kDbgHost = nullptr;

    return 0;
}