// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-foss-org/ne_system

#ifndef _NE_H_
#define _NE_H_

#define _NE_SYSTEM 202603L

#include <System/Config.h>

// POSIX wrapper
#include <libPOSIXWrapper/POSIXKit/unistd.h>
// IPC
#include <libMsg/MsgKit/Server.h>
// System calls
#include <libSystem/SystemKit/System.h>
// Sound mixer
#include <libSoundSystem/SoundSystemKit/VirtualMixer.h>

#endif // !_NE_H_
