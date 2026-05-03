# Copyright 2026, Amlal El Mahrouss and contributors.
# NeSystem is licensed under Apache-2.0.
# SPDX-Identifier: Apache-2.0

# -*- coding: utf-8 -*-

import subprocess
import os

class UpdateFunctor:
    def __init__(self):
        subprocess.call(["git", "-C", "private/src/ne-kernel", "pull"])
        subprocess.call(["git", "-C", "private/src/nectar", "pull"])
        subprocess.call(["git", "-C", "private/src/ne-build", "pull"])
        subprocess.call(["git", "-C", "private/src/tier0", "pull"])
        subprocess.call(["git", "-C", "private/doc/papers", "pull"])
        subprocess.call(["git", "add", 
         "private/src/ne-kernel",
         "private/src/tier0"
         "private/src/nectar", 
         "private/doc/papers", 
         "private/src/ne-build"])
        if (os.environ.get('UPDATER_NO_COMMIT', False) == False):
            subprocess.call(["git", "commit", "-s"])

def update():
    UpdateFunctor()
    if (os.environ.get('UPDATER_VERBOSE', False) == True):
        print("INFO: Updater: Functor called")


