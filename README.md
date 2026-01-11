# NeKernel.org.

The software distribution of NeKernel.

Developed to hold the its components and system root altogether. 

## The Rationale:

There is three main reasons for this repository's existence:

- Hold the codebase in a single repository.
- Easier path resolutions based on a virtual root path, i.e (../kernel -> /src/kernel)
- Easier cycles and vetting for NeKernel.org releases.

## Building NeKernel.org:

You will need:

- `nebuild` for the kernel build system.
- `MinGW` or `Clang` depending on the HAL/target ISA.
- `GNU CoreUtils` for the core compiler utilities.

###### Copyright 2025, Amlal El Mahrouss & NeKernel.org Authors. Licensed under Apache 2.0.
