#!/bin/bash

# Get a list of all .c files in the current directory
c_files=$(ls *.c)

# Compile each .c file to a .o object file
for c_file in $c_files
do
    gcc -c $c_file
done

# Create the static library from all .o object files
ar rcs liball.a *.o

# Clean up the .o files
rm *.o

