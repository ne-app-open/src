<!-- ReadMe of the NeSystem -->

# 🍯 The NeSystem Modules.

<a href="LICENSE"><img src="https://img.shields.io/badge/LICENSE-Apache--2.0-blue.svg?style=for-the-badge" alt="LICENSE"></a>
![GitHub Repo Stars](https://img.shields.io/github/stars/ne-foss-org/ne-system?style=for-the-badge)

## About:

The Ne System is a collection of system modules written in modern C++.

## Getting Started:

Please follow the instructions below to get started:

## Building:

You will need:

- `nebuild`, the in-house build system.
- `MinGW` or `Clang`, depending on the HAL/target ISA.
- `CoreUtils`, for the core compiler utilities.

Please follow the the tutorials in `/private/src/refs` to get started.

### Quick Install:

> [!NOTE]
> On Windows, you will need to use the setup link at:
> `curl -fsSL http://setup.nekernel.org`.

```sh
curl -fsSL http://install.nekernel.org | sh
```

### Full Installation:

Please clone the repository using Git:

```sh
git clone --recurse-submodules -j8 https://github.com/ne-foss/ne-system.git
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

## Packaging:

We plan to host a package registry for NeSystem and ANT.
More information soon.

## Community:

We have a [Discord](https://discord.gg/uD76Qweght), join us!

###### Copyright 2025-2026, Amlal El Mahrouss & Contributors, licensed under Apache 2.0.
