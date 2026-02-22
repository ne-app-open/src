<!-- Read Me of NeKernel Sources -->

<div align="center">
  <h1>
    <b>The NeKernel.org.</b>
  </h1>
  <p>
    <a href="LICENSE"><img src="https://img.shields.io/badge/License-Apache--2.0-blue.svg" alt="License"></a>
  </p>
</div>

This is the software distribution of NeKernel.org

## The Rationale:

There is three main reasons for this repository's existence:

- Hold the codebase in a single repository.
- Easier path resolutions based on a virtual root path, i.e (../kernel -> /src/kernel)
- Easier cycles and vetting for NeKernel.org releases.

## Building:

You will need:

- `nebuild` for the kernel build system.
- `MinGW` or `Clang` depending on the HAL/target ISA.
- `GNU CoreUtils` for the core compiler utilities.

Please follow the the tutorials in `/src/reference` to get started.

###### Copyright 2025, Amlal El Mahrouss & NeKernel.org Authors. Licensed under Apache 2.0.
