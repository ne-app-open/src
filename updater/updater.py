# Copyright 2026, Amlal El Mahrouss and Ne.org contributors.
# Open C++ Libraries is licensed under BSL-1.0

from os import system

class UpdateFunctor:
    def __init__(self):
        system("cd libs && cd kernel && git pull && cd ..")
        system("cd libs && cd nectar && git pull && cd ..")
        system("cd libs && cd build && git pull && cd ..")
        system("cd libs && cd boot && git pull && cd ..")
        system("cd papers && git pull")
        system("git add src/kernel src/nectar papers src/build src/boot")
        system("git commit -s -S")

def start():
    functor = UpdateFunctor()
    print("INFO: Updater: Functor called")




