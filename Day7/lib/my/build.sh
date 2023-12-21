#!/bin/bash

gcc -c *.c
ar -rcs mylib.a *.o
rm *.o
