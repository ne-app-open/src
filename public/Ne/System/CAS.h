// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-app-eu/src

#ifndef _NE_CORE_SUBSYSTEM_H_
#define _NE_CORE_SUBSYSTEM_H_

#ifndef _CAS
#define _CAS (202605L)
#endif

#include <Ne/System/Detail/Config.h>

#define CasCreateEvent(event_name) EvtAddListener(event_name, nullptr)
#define CasRemoveEvent(event_name) EvtRemoveListener(event_name, nullptr)
#define CasDispatchEvent(event_name, event_data) EvtDispatchEvent(event_name, event_data)

#endif // _NE_CORE_SUBSYSTEM_H_
