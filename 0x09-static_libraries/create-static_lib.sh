#!/bin/bash

# Compile the .c files into object files
gcc -c *.c

# Create a list of object files
objects=$(ls *.o)

# Create the static library
ar rcs liball.a $objects

# Clean up the object files
rm $objects
