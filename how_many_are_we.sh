#!/bin/bash

cat > my_tmp

if [ $# -eq 0 ]
then
  cat my_tmp | wc -l
else
  cat my_tmp | grep "$1" | wc -l

fi

rm my_tmp

