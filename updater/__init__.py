# Copyright 2026, Amlal El Mahrouss and contributors.
# NeSystem is licensed under Apache-2.0.
# SPDX-Identifier: Apache-2.0

# -*- coding: utf-8 -*-

import updater

def start_updater():
    try:
        print("Updating system...")
        updater.update()
    except OSError as e:
        print("Updater failed:", e)
        

if __name__ == '__main__':
    start_updater()

