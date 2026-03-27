// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne-system

#ifndef SOCKET_FOUNDATION_H
#define SOCKET_FOUNDATION_H

#include <libSystem/SystemKit/System.h>

#define LIBSOCKET_VERSION 0x100000

#define _SOCKET_ARRAY_CHECK(PTR) PTR != nullptr
#define _SOCKET_ARRAY_INDEX(ARR, PTR, LEN) ARR[((SInt64) PTR) % LEN]

#define _SOCKET_INVALID ((SizeT)-1)

#endif
