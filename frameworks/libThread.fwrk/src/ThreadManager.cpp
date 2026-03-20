// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne_system

#include <libSystem/SystemKit/System.h>

#define kThreadMapMax (1024UL)
#define kThreadBaseHash (0x5555ffff6ULL)

/// @brief The registered thread for a specific process.
static ThreadRef kThreadMap[kThreadMapMax];

/// @brief This hash-list stores the thread to be run.
static ThreadRef kThreadHeads[kThreadMapMax];

IMPORT_C ThreadRef ThrCreateThread(const Char* thread_name, ThrProcKind procedure,
                                   SInt32 argument_count, VoidPtr args, SInt32 flags) {
  ThreadRef ref = new REF_TYPE;
  if (!ref) return nullptr;

  if (!thread_name || !procedure) {
    delete ref;
    ref = nullptr;
    return nullptr;
  }

  ref->__hash = *(UInt32*) thread_name;
  ref->__hash += kThreadBaseHash;

  ref->__self = (VoidPtr) procedure;

  kThreadMap[kThreadMapMax % ref->__hash] = ref;
  kThreadHeads[kThreadMapMax % ref->__hash] = ref;

  return ref;
}
