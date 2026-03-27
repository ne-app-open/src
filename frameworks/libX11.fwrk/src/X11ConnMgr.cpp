// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne-system

#include <libX11.fwrk/headers/Config.h>

namespace X11 {

namespace Detail {

  static X11ConnectionPtr X11MakeConnection() {
    auto ptr = new X11Connection{};
    if (!ptr) return nullptr;

    return ptr;
  }

  static Void X11DeleteConnection(X11ConnectionPtr ptr) {
    if (!ptr) return;

    delete ptr;
    ptr = nullptr;
  }

}  // namespace Detail

}  // namespace X11