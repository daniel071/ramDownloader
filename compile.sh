#!/usr/bin/env bash

# for linux and mac
g++ ./ramDownloader.cpp

# for windows
x86_64-w64-mingw32-g++ -static-libstdc++ -static-libgcc -static ./ramDownloader.cpp
