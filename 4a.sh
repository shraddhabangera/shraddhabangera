for i in $*
do
if [ -f $i ]
then
echo "------------------------ Contents of $i -------------------------"
cat $i | tr "[a-z]" "[A-Z]"
echo "------------------------"
else
echo "File does not exists"
fi
done
