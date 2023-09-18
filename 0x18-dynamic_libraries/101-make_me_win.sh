#!/bin/bash
cp ./libmyrand.so /tmp/
export LD_PRELOAD=/tmp/libmyrand.so
