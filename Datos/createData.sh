#!/bin/bash

for fileName in `ls | sed 's/createData.sh//'`; do
	echo $fileName
	while IFS= read -r LINE || [ -n "$LINE" ]; do
    	echo "$LINE"
	done < $fileName
done; 