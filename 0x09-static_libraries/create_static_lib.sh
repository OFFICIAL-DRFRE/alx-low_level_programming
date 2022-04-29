#!/bin/bash
gcc -wall -werror -pedantic -wextra -std=gnu89 -c *.c
ar rc liball.a *.o

