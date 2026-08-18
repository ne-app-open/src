// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-app-eu/src

#include <SystemKit/System.h>
#include <SystemKit/Err.h>

IMPORT_C SInt32 BsiInstallHost(SInt32, Char**);

SInt32 main(SInt32 argc, Char** argv) {
  LIBSYS_UNUSED(argc);
  LIBSYS_UNUSED(argv);

  auto ret = BsiInstallHost(argc, argv);
  if (ret != kErrorSuccess) return kErrorInvalidData;

  return ret;
}
