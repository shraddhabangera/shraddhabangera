echo "Enter the filename"
read file1
if [ -e $file1 ]
then
set -- `ls -ld $file1`
permission1=$1
else
echo "file doesn't exists"
exit
fi
echo "Enter the second filename"
read file2
if [ -e $file2 ]
then
set -- `ls -ld $file2`
permission2=$1
else
echo "file doesn't exists"
exit
fi
if [ $permission1 = $permission2 ]
then
echo "Files are identical"
echo "Permission of $file1 and $file2 is $permission1"
else
echo "Files are not identical"
echo "Permission of $file1 is $permission1"
echo "Permission of $file2 is $permission2"
fi
