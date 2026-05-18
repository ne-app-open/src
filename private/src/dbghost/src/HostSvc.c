// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss/src

#include <DbgKit/Dbg.h>

SInt32 main(SInt32 argc, Char** argv) {
  LIBSYS_UNUSED(argc);
  LIBSYS_UNUSED(argv);

  PrintOut(nullptr, "%s", "ne.app Debug Host Service.\r");

  kDbgHost = (struct DBG_HOST*)MmCreateHeap(sizeof(struct DBG_HOST), 0);
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
