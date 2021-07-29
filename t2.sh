#!/bin/bash

#grep -i 'TAG:artist' $1
a=$1
ffprobe -show_format -loglevel quiet ${a} | grep -i TAG:artist 
if [[ $? != 0 ]]
then
	echo "It's empty"
	exit 1
else
	echo "It's not empty"
	exit 0
fi
