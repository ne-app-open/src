/* -------------------------------------------

Copyright (C) 2025, Amlal El Mahrouss, licensed under the Apache 2.0 license.

------------------------------------------- */

#pragma once

#include <lib/core/includes.hpp>

#define kSysStepsExtension ".stp"
#define kSysStepsStrLen (256U)

#define kSysStepsMagic " pls"
#define kSysStepsMagicLen (4U)
#define kSysStepsVersion (0x0100)

#define kStepsMime "ne-application-kind/steps"

namespace steps {
struct record final {
  char magic[kSysStepsMagicLen] = {kSysStepsMagic[0], kSysStepsMagic[1],
                                   kSysStepsMagic[2], kSysStepsMagic[3]};
  char name[kSysStepsStrLen] = "";
  char company[kSysStepsStrLen] = "";
  char author[kSysStepsStrLen] = "";
  int32_t version = 0;
  int32_t pages = 0;
  int32_t check_page = 0, eula_page = 0;
};

namespace operators {
/// =========================================================== ///
/// @brief Equal operator for steps records.
/// =========================================================== ///
inline bool operator==(const record &r, const record &l) {
  return (std::strncmp(r.magic, l.magic, kSysStepsMagicLen) == 0);
}

/// =========================================================== ///
/// @brief Not equal operator for steps records.
/// =========================================================== ///
inline bool operator!=(const record &r, const record &l) {
  return (std::strncmp(r.magic, l.magic, kSysStepsMagicLen) > 0);
}
} // namespace operators
} // namespace steps
