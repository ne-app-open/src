// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne-system

#ifndef LIBUI_FOUNDATION_HPP
#define LIBUI_FOUNDATION_HPP

#include <libSystem/SystemKit/System.h>

#define LIBUI_VERSION (0x100000)

#define LIBUI_ARRAY_CHECK(PTR) PTR != nullptr
#define LIBUI_ARRAY_INDEX(ARR, PTR, LEN) ARR[((SInt64) PTR) % LEN]

namespace System::UI {

namespace Detail {

  /// @brief Plain Old Data type for a X11 connection.
  struct Connection final {
    SInt32 fSocket;
    SInt32 fType;
    SInt32 fFlags;
    SInt32 fPad;
  };

  typedef struct Connection*    PConnectionType;
  typedef PConnectionType* PConnectionArrayType;

  IMPORT_C _Output PConnectionType UIMakeConnection();
  IMPORT_C Void            UIDeleteConnection(_Input PConnectionType ptr);

}  // namespace Detail

}  // namespace System::UI

#endif
