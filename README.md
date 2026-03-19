<!-- Read Me of NeKernel Sources -->

<div align="center">
  <h1>
    <b>🍯 The NeSystem:</b>
  </h1>
  <p>
    <a href="LICENSE"><img src="https://img.shields.io/badge/License-Apache--2.0-blue.svg" alt="License"></a>
  </p>
</div>

## Getting Started:

### Short-Version:

```sh
curl -fsSL https://install.nekernel.org | sh
```

### Long-Version:

Please clone the repository using Git:

```sh
git clone --recurse-submodules -j8 git@github.com:ne-foss-org/ne_system.git
```

And have a look at the wiki, docs, and primers. They have valuable resources to get started.

## Read the primers!

The primers are available at:

- https://primer.src.nekernel.org
- https://primer.nectar.nekernel.org

## Design Rationale:

There is three main reasons for this repository's existence:

- Hold the system in a single repository.
- Easier path resolutions based on a virtual root path, i.e (../kernel -> /src/kernel)
- Easier cycles and vetting for Ne.org releases.

## Building:

You will need:

- `nebuild` for the kernel build system.
- `MinGW` or `Clang` depending on the HAL/target ISA.
- `GNU CoreUtils` for the core compiler utilities.

Please follow the the tutorials in `/src/reference` to get started.

## Love the work?

Give us a star on GitHub!

![GitHub Repo stars](https://img.shields.io/github/stars/ne-foss-org/ne_system)

## The Package Registry:

We have a package registry for the NeSystem: [https://github.com/ne-ci-org/ports](https://github.com/ne-ci-org/ports) package porting happens here.

## Community:

We have a [discord](https://discord.gg/uD76Qweght), join us! [https://discord.gg/uD76Qweght](https://discord.gg/uD76Qweght)

###### Copyright 2025-2026, Amlal El Mahrouss & Ne.org Authors, licensed under Apache 2.0.
