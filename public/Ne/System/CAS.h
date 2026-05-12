// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss/src

#ifndef _NE_CORE_SUBSYSTEM_H_
#define _NE_CORE_SUBSYSTEM_H_

#ifndef _CAS
#define _CAS (202605L)
#endif

#include <Ne/System/Detail/Config.h>

/// @brief POSIX wrapper API
#include <libPOSIX/POSIXKit/unistd.h>

/// @brief IPC API
#include <libMsg/MsgKit/Server.h>

/// @brief System calls API
#include <libSystem/SystemKit/System.h>

/// @brief Sound mixer API
#include <libSoundSystem/SoundSystemKit/VirtualMixer.h>

#endif // _NE_CORE_SUBSYSTEM_H_
