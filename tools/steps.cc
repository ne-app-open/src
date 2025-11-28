/* ===========================================================

  Copyright (C) 2025 Amlal El Mahrouss, Licensed under the Apache 2.0 license

=========================================================== */

#include <io/print.hpp>
#include <steps/steps.hpp>

/// =========================================================== ///
/// Use operators from steps namespace to compare steps records.
/// =========================================================== ///
using namespace ocl::steps::operators;

const auto kStepsFileRoot = "/system/install.stp";

/// =========================================================== ///
/// @brief Main function for running steps on NeKernel.
/// =========================================================== ///
int main(void) {
  ocl::io::print("steps: running steps for program...\n");

  std::ifstream file(kStepsFileRoot);
  ocl::steps::record steps;

  file >> steps;

  if (!ocl::steps::is_valid(steps))
    return EXIT_FAILURE;

  /// AMLALE: Read steps from file and process them.

  ocl::io::print("steps: done.\n");

  return EXIT_SUCCESS;
}