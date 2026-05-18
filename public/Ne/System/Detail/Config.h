// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss/src

#pragma once

#ifndef __ne_arch
#define __ne_arch (0xdeadbeef)
#warning !! __ne_arch is not defined, set __ne_arch as a warning value. !!
#endif

#define _ARCH __ne_arch

#define _SUBSYSTEM_NET 0x1000
#define _SUBSYSTEM_DDK 0x1000
#define _SUBSYSTEM_SYS 0x1000

#define _NE_SYSTEM (202605L)
#define _NEKERNEL (202605L)

#include <CoreFoundation/headers/Foundation.h>
#include <DiskImage/headers/DiskImage.h>
#include <LaunchHelpers/headers/Foundation.h>
//#include <HostHelpers/headers/Foundation.h>
//#include <AppFoundation/headers/Foundation.h>

#ifndef _SHARED
/// @brief Shared attribute for the host pattern.
#define _SHARED
#endif

#ifndef _PRIVATE
/// @brief Private attribute for the host pattern.
#define _PRIVATE
#endif

#ifndef _FINAL
#ifdef __cplusplus
#define _FINAL final
#else
#define _FINAL
#endif
#endif
