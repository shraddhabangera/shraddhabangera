if [ $# -ne 0 ]
then
p=`echo $1|tr "/" " "`
for i in $p
do
mkdir $i
cd $i
done
echo "All Directories are created"
else
echo "Please enter the path"
fi
