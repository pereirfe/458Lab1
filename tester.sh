#!/bin/bash

input=""
algo="bubble "

while read line
do
    input=$line
    echo "line read!"
done < "a.txt"

#echo "${algo}${input}"

time `./${algo}${input}`


