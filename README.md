<!-- ReadMe of the NeSystem -->

# 🍯 The NeSystem

<a href="LICENSE"><img src="https://img.shields.io/badge/LICENSE-Apache--2.0-blue.svg?style=for-the-badge" alt="License"></a>
![GitHub Repo stars](https://img.shields.io/github/stars/ne-foss-org/ne-system?style=for-the-badge)

## About:

A software distribution that aims to provide an alternative for backend systems. (Edge Compute, Web Servers, Backend Servers, Storage Systems, etc.) made to be easily deployable and forkable as well.

## Getting Started:

## Building:

You will need:

- `nebuild`, the in-house build system.
- `MinGW` or `Clang`, depending on the HAL/target ISA.
- `CoreUtils`, for the core compiler utilities.

Please follow the the tutorials in `/src/reference` to get started.

### Quick Install:

```sh
curl -fsSL http://install.nekernel.org | sh
```

### Full Installation:

Please clone the repository using Git:

```sh
git clone --recurse-submodules -j8 git@github.com:ne-foss-org/ne-system.git
```

And have a look at the wiki, docs, and primers. They have valuable resources to get started.

## Primers:

The primers are available at:

- https://primer.src.nekernel.org
- https://primer.nectar.nekernel.org

They're made to be beginner friendly as well.

## Design Rationale:

There is three main reasons for this repository's existence:

- Hold the system in a single repository.
- Easier path resolutions based on a virtual root path, i.e (../kernel -> /src/kernel)
- Easier cycles and vetting for Ne.app releases.

## Packages:

We have a package registry for the NeSystem: [https://ports.ne-app.eu/ant-os/stable](https://ports.ne-app.eu/ant-os/stable), 
please keep in mind that both NeSystem and Ant is supported. (They have the same APIs, Ant has more, Ant is also source-available if you're curious email us at contact@nekernel.org)

## Community:

We have a [Discord](https://discord.gg/uD76Qweght), join us! [https://discord.gg/uD76Qweght](https://discord.gg/uD76Qweght)

###### Copyright 2025-2026, Amlal El Mahrouss & Ne.app Authors, licensed under Apache 2.0.
