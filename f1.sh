#!/bin/bash

stt=$1
if [ $# -lt 2 ]; then
	echo "Usage: ./cp_mult.sh [src] [dest1] ..." 
	exit 1
fi
if [ -d "$2" ]; then
	echo "D here."
	cp "$1"  "$@"
elif [ -e "$2" ]; then
	cat $1 >> "$2"
	cat $1 >> "$3"
	cat $1 >> "$4"
	cat "$1" >> "$@"

else
	exit 1
fi
exit 0
