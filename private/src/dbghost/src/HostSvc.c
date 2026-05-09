// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss/ne-system

#include <ne-system/System/NeSystem.h>

struct DBG_HOST {
  SInt32 fDbgSocket;
  SInt32 fDbgType;
  Char   fDbgPath[255];
};

static _SHARED struct DBG_HOST* kDbgHost        = nullptr;
static _SHARED SInt32           kDbgHostEnabled = YES;
static _SHARED SInt32           kDbgSignal      = kErrorSuccess;

SInt32 NeMain(Void) {
  PrintOut(nullptr, "%s", "Ne.app Debug Host.\rCopyright 2026, Ne.app.\r");

  kDbgHost = MmCreateHeap(sizeof(struct DBG_HOST), 0);
  if (!kDbgHost) return kErrorInvalidData;

  while (kDbgHostEnabled) {
    if (kDbgSocket->fDbgSocket == 0) break;
    /// TODO: Business logic.
  }

  if (kDbgHost) {
    MmDestroyHeap(kDbgHost);
    kDbgHost = nullptr;
  }

  return kErrorSuccess;
}
