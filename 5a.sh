filename=$1
if [ -e $filename ]
then
set -- `ls -ld $filename`
echo "The creation time of $filename is $6 $7 $8"
else
echo "File does not exist"
fi
