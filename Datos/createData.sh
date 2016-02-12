#!/bin/bash

for fileName in `ls | sed 's/createData.sh//'`; do
	echo "parseando $fileName"
	sed -i -e "s/\t/ /g" -i -e "s/\r//g" -i -e "s/\([a-zA-Z]*\)//gw datos.txt" $fileName 
done; 