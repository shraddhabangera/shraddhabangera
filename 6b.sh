p=0
q=0
for i in `ls`
do
p=`expr $p + 1`
len=`expr length $i`
if [ $len -ge 10 ]
then
echo "Filename has $i Characters : $len "
else
q=`expr $q + 1`
fi
done
if [ $p -eq $q ]
then
echo "No filename have 10 characters"
fi
