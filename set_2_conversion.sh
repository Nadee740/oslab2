echo -n "Enter a decimal number : "
read n

bin=$(echo "obase=2;$n" | bc)
echo Binary Value : $bin

hex=$(echo "obase=16;$n" | bc)
echo Hexadecimal Value : $hex
