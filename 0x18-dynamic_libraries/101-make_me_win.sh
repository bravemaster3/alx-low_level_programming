#!/bin/bash
cp ./libmyrand.so /tmp/
export LD_PRELOAD=/tmp/libmyrand.so
./gm 9 8 10 24 75 9
