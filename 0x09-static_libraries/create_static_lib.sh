#!/bin/bash

# script to create a static library.

gcc -Wall -Werror -Wextra -pedantic -c *.c

echo Batch Compile complete.
echo Commencing Archiving...

ar -rc liball.a *.o

echo Archiving completed!
echo liball.a file created! Goodbye.
