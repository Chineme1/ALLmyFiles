#!/bin/bash


echo "I work"
start=$2
end=$3
while [[ "start" -le "$end" ]]; do
	echo '=== '$start' ==='
	cat === $start === >>$5
	start=$((start + $4))
done
