#! /usr/bin/python3

from os import system

# Copyright 2026, Amlal El Mahrouss and Ne.org contributors.
# The Ne Syste, is licensed under the BSL-1.0 or Apache 2.0.

if __name__ == '__main__':
    print("precommit: running format.sh...")
    system("cd libs && cd kernel && git pull && cd ..")
    system("cd libs && cd nectar && git pull && cd ..")
    system("cd libs && cd build && git pull && cd ..")
    system("cd libs && cd boot && git pull && cd ..")
    system("git add src/kernel src/nectar src/build src/boot")
    system("git commit -s -S")


