#!/bin/bash

for fileName in `ls | sed 's/createData.sh//'`; do
	echo "parseando $fileName"
	sed -e 's/\t/ /g' -e 's/\r/ /g' -e 's/\([a-zA-Z]*\)//g' $fileName >> "datos.txt"
done; 