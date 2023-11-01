#!/bin/bash

# Compile each .c file into a .o file
gcc -c *.c

# Create a static library named liball.a
ar rc liball.a *.o

# Index the library for faster access
ranlib liball.a

# Clean up the .o files (optional)
rm -f *.o
