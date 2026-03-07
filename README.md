<!-- Read Me of NeKernel Sources -->

<div align="center">
  <h1>
    <b>The Ne.org System.</b>
  </h1>
  <p>
    <a href="LICENSE"><img src="https://img.shields.io/badge/License-Apache--2.0-blue.svg" alt="License"></a>
  </p>
</div>

## Primers:

The primers are available at:

- https://primer.src.nekernel.org
- https://primer.nectar.nekernel.org

## Helping:

Love our work? Give us a star!

![GitHub Repo stars](https://img.shields.io/github/stars/ne-foss-org/ne_system)

## Abstract:

This is the system distribution of Ne.org. Designed the contain all of the stack together. Facilities are provided to build compiler toolchains as well.

## Getting Started:

Please clone the repository using Git:

```sh
git clone --recurse-submodules -j8 git@github.com:ne-foss-org/src.git
```

And 

## Rationale:

There is three main reasons for this repository's existence:

- Hold the codebase in a single repository.
- Easier path resolutions based on a virtual root path, i.e (../kernel -> /src/kernel)
- Easier cycles and vetting for Ne.org releases.

## Building:

You will need:

- `nebuild` for the kernel build system.
- `MinGW` or `Clang` depending on the HAL/target ISA.
- `GNU CoreUtils` for the core compiler utilities.

Please follow the the tutorials in `/src/reference` to get started.

## Community:

We have a [discord](https://discord.gg/uD76Qweght), join us! [https://discord.gg/uD76Qweght](https://discord.gg/uD76Qweght)

###### Copyright 2025, Amlal El Mahrouss & Ne.org Authors. Licensed under Apache 2.0.
