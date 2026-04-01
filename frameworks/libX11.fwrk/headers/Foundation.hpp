// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne-system

#ifndef LIBX11_FOUNDATION_HPP
#define LIBX11_FOUNDATION_HPP

#include <libSystem/SystemKit/System.h>

#define LIBX11_VERSION 0x100000

#define LIBX11_X11_ARRAY_CHECK(PTR) PTR != nullptr
#define LIBX11_X11_ARRAY_INDEX(ARR, PTR, LEN) ARR[((SInt64) PTR) % LEN]

namespace X11 {

namespace Detail {

  /// @brief Plain Old Data type for a X11 connection.
  struct X11Connection final {
    SInt32 fSocket;
    SInt32 fType;
    SInt32 fFlags;
    SInt32 fPad;
  };

  typedef X11Connection*    X11ConnectionPtr;
  typedef X11ConnectionPtr* X11ConnectionArray;

}  // namespace Detail

}  // namespace X11

#endif
