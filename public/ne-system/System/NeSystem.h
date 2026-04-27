// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss/ne-system

#ifndef _SYSTEM_NE_SYSTEM_H_
#define _SYSTEM_NE_SYSTEM_H_

#define _NE_SYSTEM 202603L

#include <ne-system/System/Detail/Config.h>

/// @brief POSIX wrapper API
#include <libPOSIXWrapper/POSIXKit/unistd.h>

/// @brief IPC API
#include <libMsg/MsgKit/Server.h>

/// @brief System calls API
#include <libSystem/SystemKit/System.h>

/// @brief Sound mixer API
#include <libSoundSystem/SoundSystemKit/VirtualMixer.h>

#ifdef _NE_NEED_X11
#include <System/WindowSystems/X11.h>
#endif

#ifdef _NE_NEED_WAYLAND
#include <System/WindowSystems/Wayland.h>
#endif

#endif // _SYSTEM_NE_SYSTEM_H_
