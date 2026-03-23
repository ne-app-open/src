// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne_system

#ifndef X11_FOUNDATION_H
#define X11_FOUNDATION_H

#include <libSystem/SystemKit/System.h>

#define _X11_ARRAY_CHECK(PTR) PTR != nullptr
#define _X11_ARRAY_INDEX(ARR, PTR, LEN) ARR[((SInt64) PTR) % LEN]

namespace X11 {

/// @brief Plain Old Data type for a X11 connection.
struct X11Connection final {
  SInt32 fSocket;
  SInt32 fType;
  SInt32 fFlags;
  SInt32 fPad;
};

typedef X11Connection*    X11ConnectionPtr;
typedef X11ConnectionPtr* X11ConnectionArray;

}  // namespace X11

#endif
