#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.c
gcc -shared -o liballl.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
