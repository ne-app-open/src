// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-app-eu/src

#pragma once

#include "SystemKit/Macros.h"
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

#ifdef __cplusplus
#include <CoreFoundation/headers/Foundation.h>
#include <DiskImage/headers/DiskImage.h>
#include <KernelTest/headers/Foundation.h>
#include <LaunchHelpers/headers/Foundation.h>
#endif

#include <MsgKit/Server.h>
#include <POSIXKit/unistd.h>
#include <PThreadKit/pthread.h>
#include <SystemKit/System.h>
#include <ThreadKit/Thread.h>

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

#define SUBSYSTEM_HEADER_MAGIC (0xf000eee)

/// @brief The Subsystem Information for Program Loader.
struct _SHARED SUBSYSTEM_INFO_MANIFEST _FINAL {
  SInt32 fMagic;
  SInt32 fSubsystemTarget;
  SInt32 fVersion, fFlags, fImageKind;
  Char   fName[FILE_MAX_LEN];
  SizeT  fNameSz;
  Char   fRootPath[FILE_MAX_LEN];
  SizeT  fRootPathSz;
};

#ifndef SUBSYSTEM_INVALID_TARGET
#define SUBSYSTEM_INVALID_TARGET (0)
#endif

#ifndef SUBSYSTEM_POSIX_TARGET
#define SUBSYSTEM_POSIX_TARGET (0x100)
#endif

#ifndef SUBSYSTEM_NESYSTEM_TARGET
#define SUBSYSTEM_NESYSTEM_TARGET (SUBSYSTEM_POSIX_TARGET + 1)
#endif

#ifndef SUBSYSTEM_WINE_TARGET
#define SUBSYSTEM_WINE_TARGET (SUBSYSTEM_POSIX_TARGET + 2)
#endif
