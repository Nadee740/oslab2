#! /usr/bin/bash
filename='Students.txt'
n=1
while read line; do
    # reading each line
    #echo "Line No. $n : $line"
    tokens=( $line )
    #echo ${tokens[*]}
    if [ ${tokens[1]} -ge 50 ] && [ ${tokens[2]} -ge 50 ] && [ ${tokens[3]} -ge 50 ]
    then
        echo "${tokens[0]} Passed"
    else
        echo "${tokens[0]} failed"
    fi
    n=$((n+1))
done < $filename
