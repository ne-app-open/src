// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne_system

#ifndef _NE_SYSTEM_H_
#define _NE_SYSTEM_H_

#define _NE_SYSTEM 202603L

#include <System/Config.h>

// POSIX wrapper API
#include <libPOSIXWrapper/POSIXKit/unistd.h>
// IPC API
#include <libMsg/MsgKit/Server.h>
// System calls API
#include <libSystem/SystemKit/System.h>
// Sound mixer API
#include <libSoundSystem/SoundSystemKit/VirtualMixer.h>

#ifdef _NE_NEED_X11
#include <System/X11+Fwd.h>
#endif

#endif // !_NE_SYSTEM_H_
