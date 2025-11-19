/* -------------------------------------------

Copyright (C) 2025, Amlal El Mahrouss, licensed under the Apache 2.0 license.

------------------------------------------- */

#include <lib/io/print.hpp>
#include <libsteps/steps.h>

/// Use operators from steps namespace to compare steps records.
using namespace steps::operators;

/// =========================================================== ///
/// @brief Main function for running steps on NeKernel.
/// =========================================================== ///
int main(int argc, char** argv)
{
    ocl::io::print("steps: running steps for program...\n");

    steps::record steps;

    /// AMLALE: Read steps from file and process them.
    
    ocl::io::print("steps: done!\n");

    return EXIT_SUCCESS;
}