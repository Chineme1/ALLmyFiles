#!/bin/bash

getArtistName() {

	a=$(ffprobe -show_format -loglevel quiet "$i" | grep TAG:title | cut -d = -f2 | tr -d ' ')

}

getSongName() {
	b=$(ffprobe -show_format -loglevel quiet "$i" | grep TAG:artist | cut -d = -f2 | tr -d ' ')

}

doConversion() {

	for i in "$TARGET_DIR"/*
	do
		getArtistName
		getSongName
		#new_f="${b}_${a}.mp3"
		#ffmpeg -i "$i" -y "${TARGET_DIR}/${b}_${a}.mp3"
		#ffprobe -show_format -loglevel quiet "${i}" | grep -i TAG:artist
		#if [[ $a != ' ' ]]
		#then
		#	if [[ $b != ' ' ]]
		#	then
				ffmpeg -i "$i" -y "${TARGET_DIR}/${b}_${a}.mp3"
				#echo $a
		#	fi
		#	rm "${TARGET_DIR}/${b}_${a}.mp3"	
		#fi
		rm -f "${i}"

	done
	exit 0
}

TARGET_DIR=$1
doConversion
