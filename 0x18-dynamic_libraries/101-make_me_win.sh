#!/bin/bash
gcc -shared -o libtest.so -fPIC jackpott.c
export LD_PRELOAD=./libtest.so:$LD_LIBRARY_PATH
