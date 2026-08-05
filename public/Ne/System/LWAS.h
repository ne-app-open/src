// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-app-eu/src

#ifndef _NE_LWAS_SUBSYSTEM_H_
#define _NE_LWAS_SUBSYSTEM_H_

#ifndef _LWAS
#define _LWAS (202608L)
#endif

/// *******************************************************
/// @brief Local Window Application Subsystem.
/// *******************************************************

#include <Ne/System/Detail/Config.h>
#include <Ne/System/CAS.h>

struct LWAS_HOST;

struct LWAS_HOST _FINAL {
	Char   fPad[8];
	SInt64 fMagic;
	SInt32 fHostID, fFlags, fKind;
	Char   fPad2[8];
};

#endif // _NE_LWAS_SUBSYSTEM_H_
