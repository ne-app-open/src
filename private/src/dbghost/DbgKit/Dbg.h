// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss/src

#pragma once

#include <Ne/System/CAS.h>
#include <SystemKit/Err.h>
#include <SystemKit/Syscall.h>

#define kNeInvalidDbgSocket (0L)

/// ======= PIN OUT =======
/// \brief This applies only if DBGHOST is used via RS-422
/// GND: 0
/// DIN+: 1
/// DIN-: 2
/// DOUT+: 3
/// DOUT-: 4
/// VCC: 5
/// ======= END PIN OUT =======

struct DBG_HOST;

struct _PRIVATE DBG_HOST _FINAL {
  SInt32 fDbgSocket;
  SInt32 fDbgType;
  Char   fDbgPath[255];
};

typedef struct DBG_HOST DBG_HOST_T, *PDBG_HOST_T;

static inline _SHARED PDBG_HOST_T kDbgHost        = nullptr;
static inline _SHARED SInt32      kDbgHostEnabled = YES;
static inline _SHARED SInt32      kDbgSignal      = kErrorSuccess;
