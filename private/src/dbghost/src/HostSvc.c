// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss/src

#include <DbgKit/Dbg.h>

static _SHARED struct DBG_HOST* kDbgHost        = nullptr;
static _SHARED SInt32           kDbgHostEnabled = YES;
static _SHARED SInt32           kDbgSignal      = kErrorSuccess;

SInt32 NeMain(Void) {
  PrintOut(nullptr, "%s", "Ne.app Debug Host.\rCopyright 2026, Ne.app.\r");

  kDbgHost = MmCreateHeap(sizeof(struct DBG_HOST), 0);
  if (!kDbgHost) return kDbgSignal;

  while (kDbgHostEnabled) {
    if (kDbgHost->fDbgSocket == 0) break;
    /// TODO: Business logic.
  }

  if (kDbgHost != nullptr) {
    MmDestroyHeap(kDbgHost);
    kDbgHost = nullptr;
  }

  return kDbgSignal;
}
