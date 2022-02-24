echo -n "Enter the Limit :"
read n
x=`expr $n + 1`
y=`expr $n \* $x`
sum=`expr $y / 2`
echo "The sum of First $n number is $sum "
