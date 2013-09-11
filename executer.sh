#!/bin/sh

i=0
tot=5
p=2000
top=70000
while [ $i -ne $tot ] 
do
    x=$p
    while [ $x -ne $top ]
    do
	`bash tester.sh quick $x a.txt exec_quick_70000.csv`
	echo "Im at $x x $i"
	x=`echo "$x + $p" | bc` 
    done
    echo "" >> exec_quick_70000.csv
    i=`echo "$i + 1" | bc` 

done