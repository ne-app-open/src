// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne_system

#include <libSystem/SystemKit/System.h>
#include <libX11.fwrk/headers/Config.h>
#include <CoreFoundation.fwrk/headers/String.h>

#define X11_ARRAY_CHECK(PTR) PTR != nullptr
#define X11_ARRAY_INDEX(ARR, PTR, LEN) ARR[((SInt64)PTR) % LEN]

struct X11Connection final {
    SInt32 fSocket; 
    SInt32 fType;
    SInt32 fFlags;
    SInt32 fPad;
};

typedef X11Connection* X11ConnectionPtr;
typedef X11ConnectionPtr* X11ConnectionArray;
