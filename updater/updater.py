# Copyright 2026, Amlal El Mahrouss and Ne.app contributors.
# NeSystem is licensed under Apache-2.0.
# SPDX-Identifier: Apache-2.0

# -*- coding: utf-8 -*-

import os

class UpdateFunctor:
    def __init__(self):
        os.system("cd private/src && cd kernel && git pull && cd ..")
        os.system("cd private/src && cd nectar && git pull && cd ..")
        os.system("cd private/src && cd build && git pull && cd ..")
        os.system("cd papers && git pull")
        os.system("git add private/src/kernel private/src/nectar papers private/src/build")
        if (os.environ.get('UPDATER_NO_COMMIT', False) == False):
            os.system("git commit -s")

def start():
    functor = UpdateFunctor()
    if (os.environ.get('UPDATER_VERBOSE', False) == True):
        print("INFO: Updater: Functor called")


