#!/bin/bash

if [ $# -ne 4 ] 
then
    echo 'Uso: bash tester $algo $tamanho $input $output'
    echo '$output = /dev/tty: STDOUT'

else 
    ./timer "$1 $2 < $3 >/dev/null" >> $4
    echo -ne ";" >> $4
fi
