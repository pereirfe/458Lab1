#!/bin/bash

if [ $# -ne 3 ] 
then
    echo 'Uso: bash tester $algo $tamanho $input'

else
    ./timer "$1 $2 < $3 > /dev/null"
fi
