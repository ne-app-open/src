// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss/src

#pragma once

#include <Ne/System/CAS.h>

struct DBG_HOST;

struct DBG_HOST {
  SInt32 fDbgSocket;
  SInt32 fDbgType;
  Char   fDbgPath[255];
};

/// ======= PIN OUT =======
/// \brief This applies only if DBGHOST is used via RS-422
/// /// /// GND: 0
/// DIN+: 1
/// DIN-: 2
/// DOUT+: 3
/// DOUT-: 4
/// VCC: 5
