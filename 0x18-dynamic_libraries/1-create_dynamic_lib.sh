#!/bin/bash

# Compile all .c files into object files
gcc -c -fPIC *.c

# Create the dynamic library
gcc *.o -shared -o liball.so
