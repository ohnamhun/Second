#!/bin/bash

for i in {2..9}
do
	for j in {1..9}
	do
		result=$(($i*$j))
		echo "$i * $j = $result"
	done
done
