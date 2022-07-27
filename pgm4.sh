echo "input 3 numbers"
read a1;
read a2;
read a3;
if [ $a1 -lt $a2 ] && [ $a1 -lt $a3 ]
   then
       echo "$a1";
fi
if [ $a2 -lt $a1 ] && [ $a2 -lt $a3 ]
   then
       echo "$a2";
fi
if [ $a3 -lt $a2 ] && [ $a3 -lt $a1 ]
   then
       echo "$a3";
fi