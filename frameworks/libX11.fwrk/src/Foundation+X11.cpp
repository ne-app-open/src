// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne-system

#include <libX11.fwrk/headers/Foundation.hpp>

namespace X11 {

namespace Detail {

  X11ConnectionPtr x11_make_connection_ptr() {
    auto ptr = new X11Connection{};
    if (!ptr) return nullptr;

    return ptr;
  }

  Void x11_delete_connection_ptr(X11ConnectionPtr ptr) {
    if (!ptr) return;

    delete ptr;
    ptr = nullptr;
  }

}  // namespace Detail

}  // namespace X11