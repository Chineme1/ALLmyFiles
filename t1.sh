#!/bin/bash

b=$(ffprobe -show_format -loglevel info $1)
var="TAG:artist"
a=$(ffprobe -i $1 -show_format | grep TAG:artist)

for i in "$1"
do
	rm "$1/*"

done
##echo ${b}
##echo ${var}
##echo b[9]

<<B
for i in ${b}
do
	echo "$i"
done
B
echo $c
<<C
for i in ${b}
do

	if [[ i == *"$var"* ]]
	then
		echo "${i}"
	fi
	case i in 
		*"$var"*) echo "$i" ;;
		*) echo "Try something else" ;;
	esac

done
C

##echo "${b}"

