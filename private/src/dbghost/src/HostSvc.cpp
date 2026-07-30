// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-app-eu/src

#include <DbgKit/Dbg.h>

#ifndef kDbgHostServiceLoopName
#define kDbgHostServiceLoopName "_DbgHostServiceLoop"
#endif

SInt32 main(SInt32 argc, Char** argv) {
  LIBSYS_UNUSED(argc);
  LIBSYS_UNUSED(argv);

  PrintOut(nullptr, "%s", "Ne.app Debug Host Service.\r");

  kDbgHost = (struct DBG_HOST*)MmCreateHeap(sizeof(struct DBG_HOST), 0);
  if (!kDbgHost) return kDbgSignal;

  while (kDbgHostEnabled) {
    if (kDbgHost && kDbgHost->fDbgSocket == kNeInvalidDbgSocket) break;
    (Void)nesys_syscall_arg_1(nesys_hash_64(kDbgHostServiceLoopName));
  }

  if (kDbgHost != nullptr) {
    MmDestroyHeap(kDbgHost);
    kDbgHost = nullptr;
  }

  return kDbgSignal;
}
