#!/bin/bash


echo "Objects compiling"

gcc -c -Wall -Werror -Wextra *.c

echo "DONE!"

echo "Creating library now."
echo ".."
echo "..."

ar -rc liball.a *.o

echo "Done..."
ls -l

echo "Indexing library"
ranlib liball.a

echo "Creation of static library. Done. Exiting..."
