echo "Enter a binary number"
read n;
copy=$n;
hex="";
hexn="";
bin="";
while [ $n -gt 0 ]
 do
    mod=$((n%16))
    hexn=$mod;
    if [ $mod -gt 9 ]
    then
    	if [ $mod == 10 ]
    	 then
    	 	hexn="A";
    	fi
    	if [ $mod -eq 11 ]
    	 then
    	 	hexn="B";
    	fi
    	if [ $mod -eq 12 ]
    	 then
    	 	hexn="C";
    	fi
    	if [ $mod -eq 13 ]
    	 then
    	 	hexn="D";
    	fi
    	if [ $mod -eq 14 ]
    	 then
    	 	hexn="E";
    	fi
    	if [ $mod -eq 15 ]
    	 then
    	 	hexn="F";
    	fi
    fi
  hex=$hexn$hex;
  n=$((n/16));
  done
  echo "hexadecimal - $hex"

while [ $copy -gt 0 ]
 do
    
    bin=$((copy%2))$bin;
    copy=$((copy/2));
  done
echo "binary - $bin"