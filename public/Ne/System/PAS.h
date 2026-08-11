// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-app-eu/src

#ifndef _NE_POSIX_SUBSYSTEM_H_
#define _NE_POSIX_SUBSYSTEM_H_

#ifndef _PAS
#define _PAS (202608L)
#endif

#ifndef __IDSTRING
#define __IDSTRING(name, string) STATIC const Char name[] __attribute__((unused)) = string
#endif

#ifndef __COPYRIGHT
#define __COPYRIGHT(s) __IDSTRING(copyright, s)
#endif  // ifndef __COPYRIGHT

#endif