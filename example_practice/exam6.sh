#!/bin/bash

add(){
	echo "input: $1 $2"
	return $(($1+$2))
}

#call function
add "3" "7"

#return value
result=$?

echo $result
