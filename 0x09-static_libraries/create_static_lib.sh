#!/bin/bash

# Compile each .c file into an object file
for file in *.c; do
    gcc -c "$file"
done

# Create the static library liball.a from the object files
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up the object files
rm -f *.o

echo "Static library liball.a created."
