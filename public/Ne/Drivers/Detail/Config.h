// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-app-eu/src

#ifndef _NE_DDK_CONFIG_H_
#define _NE_DDK_CONFIG_H_

#define _ARCH __ne_arch

#define _SUBSYSTEM_NET 0x1000
#define _SUBSYSTEM_DDK 0x1000
#define _SUBSYSTEM_SYS 0x1000

#ifndef _NEKERNEL
#define _NEKERNEL 202609L
#endif

#include <DriverKit/DriverKit.h>

#endif
