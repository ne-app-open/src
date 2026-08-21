<!-- ReadMe of the NeSystem -->

# Ne.app NeSystem 

### Notice

NeSystem is not open to new contributors, unless you contributed to similar Ne.app modules and similar large scale open source projects. This is done to have the highest quality merge requests.

<a href="LICENSE"><img src="https://img.shields.io/badge/LICENSE-Apache--2.0-blue.svg?style=for-the-badge" alt="LICENSE"></a>
![GitHub Repo Stars](https://img.shields.io/github/stars/ne-app-eu/src?style=for-the-badge)

## Getting Started

Please follow the instructions below to get started:

## Building

You will need

- `nebld`, Ne.app's in-house build system.
- `MinGW` or `Clang`, depending on the HAL/target ISA.
- `CoreUtils`, for the core compiler utilities.

(Please follow the instructions in `/private/src/refs` and wiki to get started)

### Quick Install

> [!NOTE]
> On Windows, you will need to use the setup link at:
> `curl -fsSL http://setup.nekernel.org`.

```sh
curl -fsSL http://install.nekernel.org | sh
```

## On the Primers

The primers are available at:

- https://primer.src.nekernel.org
- https://primer.nectar.nekernel.org

Designed to be make onboarding easier.

## Design Rationale

There is three main reasons for this repository's existence:

- Hold the system in a single repository.
- Easier path resolutions based on a virtual root path, i.e (../krnl -> /private/src/krnl)
- Easier cycles and vetting for Ne.app releases.

## User Groups

Ne.app has a user group on [discord](https://discord.gg/uD76Qweght) for contributors and announcements.

###### Copyright 2022-2026, Ne.app. Licensed under Apache 2.0.
