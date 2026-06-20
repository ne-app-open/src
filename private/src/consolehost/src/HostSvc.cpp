// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Amlal El Mahrouss (amlal@nekernel.org)
// Licensed under the Apache License, Version 2.0 (see LICENSE file)
// Official repository: https://github.com/ne-app-eu/src

#include <CHSKit/Console.h>

SInt32 main(SInt32 argc, Char** argv) {
  LIBSYS_UNUSED(argc);
  LIBSYS_UNUSED(argv);

  PrintOut(nullptr, "%s", "ne.app Console Host Service.\r");

  return kErrorSuccess;
}