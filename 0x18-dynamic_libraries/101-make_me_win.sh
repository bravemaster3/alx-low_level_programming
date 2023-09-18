#!/bin/bash
wget https://github.com/bravemaster3/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libmyrand.so -P /tmp/
export LD_PRELOAD=/tmp/libmyrand.so
