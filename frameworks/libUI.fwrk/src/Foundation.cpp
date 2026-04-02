// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne-system

#include <libUI.fwrk/headers/Foundation.hpp>

/// Enforceable at compile-time.
#ifndef LIBUI_ARRAY_INDEX_MAX_LEN
#define LIBUI_ARRAY_INDEX_MAX_LEN __nesystem_conn_array_max_len
#endif

namespace System::UI {

namespace Detail {

  static PConnectionArrayType kConnections = nullptr;

  IMPORT_C PConnectionType UIMakeConnection() {
    auto ptr = new Connection{};

    if (!ptr) return nullptr;
    if (ptr) kConnections[LIBUI_ARRAY_INDEX(kConnections, ptr, LIBUI_ARRAY_INDEX_MAX_LEN)] = ptr;

    return ptr;
  }

  IMPORT_C Void UIDeleteConnection(PConnectionType ptr) {
    if (!ptr) return;

    delete ptr;

    ptr                                                                           = nullptr;
    kConnections[LIBUI_ARRAY_INDEX(kConnections, ptr, LIBUI_ARRAY_INDEX_MAX_LEN)] = nullptr;
  }

}  // namespace Detail

}  // namespace System::UI