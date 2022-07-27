echo "input a number"
read a1;
rev="";
while [ $a1 -gt 0 ]
 do
    rev=$rev$((a1%10));
    a1=$((a1/10));
 done
echo "reversed is $rev";
