/* -------------------------------------------

Copyright (C) 2025, Amlal El Mahrouss, licensed under the Apache 2.0 license.

------------------------------------------- */

#pragma once

#include <libsteps/dev/lib/defines.hpp>

#define kStepsExtension ".stp"
#define kStepsStrLen (256U)

#define kStepsMagic " pls"
#define kStepsMagicLen (4U)
#define kStepsVersion (0x0100)

namespace steps {
struct record final {
  ocl::char_type magic[kStepsMagicLen] = {kStepsMagic[0], kStepsMagic[1],
                                          kStepsMagic[2], kStepsMagic[3]};
  ocl::char_type name[kStepsStrLen] = "";
  ocl::char_type company[kStepsStrLen] = "";
  ocl::char_type author[kStepsStrLen] = "";
  int32_t version = 0;
  int32_t pages = 0;
  int32_t check_page = 0, eula_page = 0;
};

namespace operators {
/// =========================================================== ///
/// @brief Equal operator for steps records.
/// =========================================================== ///
inline bool operator==(const record &r, const record &l) {
  return (std::strncmp(r.magic, l.magic, kStepsMagicLen) == 0);
}

/// =========================================================== ///
/// @brief Not equal operator for steps records.
/// =========================================================== ///
inline bool operator!=(const record &r, const record &l) {
  return (std::strncmp(r.magic, l.magic, kStepsMagicLen) > 0);
}
} // namespace operators
} // namespace steps
