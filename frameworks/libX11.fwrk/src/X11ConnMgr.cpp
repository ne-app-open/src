// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne_system

#include <libSystem/SystemKit/System.h>
#include <libX11.fwrk/headers/Config.h>

#define X11_ARRAY_CHECK(PTR) PTR != nullptr
#define X11_ARRAY_INDEX(ARR, PTR, LEN) ARR[((SInt64) PTR) % LEN]

namespace X11 {

struct X11Connection final {
  SInt32 fSocket;
  SInt32 fType;
  SInt32 fFlags;
  SInt32 fPad;
};

typedef X11Connection*    X11ConnectionPtr;
typedef X11ConnectionPtr* X11ConnectionArray;

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

}  // namespace X11