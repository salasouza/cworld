#!/bin/bash -e

PROGRAM=$1

gcc $PROGRAM.c -o build/$PROGRAM

./build/$PROGRAM "${@:2}";
exitcode=$?
exit $exitcode
