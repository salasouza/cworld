#!/bin/bash -e

PROGRAM=$1

gcc src/$PROGRAM.c -o build/$PROGRAM

./build/$PROGRAM "${@:2}";
exitcode=$?
exit $exitcode
