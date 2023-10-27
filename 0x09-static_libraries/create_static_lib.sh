#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcs Liball.a *.o
ranlib Liball.a
