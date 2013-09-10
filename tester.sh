#!/bin/bash

if [ $# -ne 4 ] 
then
    echo 'Uso: bash tester $algo $tamanho $input $output'
    echo '$output = /dev/tty: STDOUT'

else
    touch tmp.tmp
    ./timer "$1 $2 < $3 > tmp.tmp" >> $4
    `./verify $2 < tmp.tmp`
    if [ $? -ne 0 ]
    then
	echo "VETOR NAO ORDENADO CORRETAMENTE PELO ${1}-sort"
    fi
    rm tmp.tmp
fi
