#!/bin/sh
echo -n Enter the number :
read num
flag=1
numvalue=$num
num=$((num+1))
while [ $flag -eq 1 ] ; do
	flag2=1
	for ((i=2 ; i<$num ;i++ )) ; do
		value=$((num%i))
		if [ $value -eq 0 ] ; then
			flag2=0
			break
		fi
	done
	palin=0
	n=$num
	while [ $n -gt 0 ] ; do
		palin=$((palin*10))
		k=$((n%10))
		palin=$((palin+k))
		n=$((n/10))
	done
	if [[ ($flag2 -eq 1) && ($palin -eq $num) ]] ; then
		flag=0
	else
		num=$((num+1))
	fi
done
echo "$num"
