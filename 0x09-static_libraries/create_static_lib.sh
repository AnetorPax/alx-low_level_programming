#!/bin/bash
for file in *.c; do
    gcc -c "$file"
done

# Create the static library using all the .o files
ar rcs liball.a *.o

# Clean up by removing the .o files
rm -f *.o
