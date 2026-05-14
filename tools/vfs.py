# Copyright 2026, Amlal El Mahrouss and contributors.
# NeSystem is licensed under Apache-2.0.
# SPDX-Identifier: Apache-2.0

# -*- coding: utf-8 -*-

import sys

"""
    The vfs tool resolves a specific module according to a ROOT_VFS path.
"""

ROOT_VFS='../'

def vfs_resolve(path):
    return ROOT_VFS + path


if __name__ == '__main__':
    if (len(sys.argv) == 0):
        exit()

    print(vfs_resolve(sys.argv[1]), end='')

