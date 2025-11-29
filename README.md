<img src="./meta/png/logo.png"/>

The system repository was developed to hold the NeKernel components together. 

Acting as the software distribution for NeKernel.

## Reasons:

There is three main reasons for this repository:

- Hold the codebase in a single repository, it is way more maintable than a fragmented one.
- Easier paths based on the `system` path, i.e (../kernel -> /system/src/kernel)
- One central system release is easier than releasing each component on its own.

## Notes

- `include` is for the system libraries (libSystem, libDDK) and other third-party installed libraries headers.
- `devices` and `network` are for network and standard devices on NeKernel.

###### Copyright 2025, Amlal El Mahrouss & NeKernel.org Contributors. Licensed under Apache 2.0.
