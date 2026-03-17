// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/src

#ifndef _SYSTEM_NE_X11_H_
#define _SYSTEM_NE_X11_H_

#define _NE_X11_SYSTEM 202603L

struct XFCURSOR; // Cursor struct
struct XFDISPLAY; // Display struct
struct XFCONN; // Connection struct

typedef struct XFCURSOR* XcursorImage;
typedef struct XFCURSOR** XcursorCursors;

/// @brief NeSystem Header.
#include <ne_system/System/NeSystem.h>

/// @brief Defs of the X11 protocol.
#include <ne_system/System/X11/Imports.h>

/// @brief XDG' extensions of the X11 protocol.
#include <ne_system/System/X11/Ext/Imports.h>

#endif // _SYSTEM_NE_X11_H_

