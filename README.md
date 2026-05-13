<!-- ReadMe of the NeSystem -->

<a href="LICENSE"><img src="https://img.shields.io/badge/LICENSE-Apache--2.0-blue.svg?style=for-the-badge" alt="LICENSE"></a>
![GitHub Repo Stars](https://img.shields.io/github/stars/ne-foss-org/src?style=for-the-badge)

## Getting Started

Please follow the instructions below to get started:

## Building

You will need:

- `nebuild`, the in-house build system.
- `MinGW` or `Clang`, depending on the HAL/target ISA.
- `CoreUtils`, for the core compiler utilities.

Please follow the the tutorials in `/private/src/refs` to get started.

### Quick Install

> [!NOTE]
> On Windows, you will need to use the setup link at:
> `curl -fsSL http://setup.nekernel.org`.

```sh
curl -fsSL http://install.nekernel.org | sh
```

## Primers

The primers are available at:

- https://primer.src.nekernel.org
- https://primer.nectar.nekernel.org

Designed to be make onboarding easier.

## Design Rationale

There is three main reasons for this repository's existence:

- Hold the system in a single repository.
- Easier path resolutions based on a virtual root path, i.e (../ne-kernel -> /private/src/ne-kernel)
- Easier cycles and vetting for Ne.app releases.

## Packaging

We plan to host a package registry for NeSystem and ANT.
More information soon.

## Community

Ne.app has a community [discord](https://discord.gg/uD76Qweght) for contributors and announcements.

###### Copyright 2022-2026, Amlal El Mahrouss. Licensed under Apache 2.0.
