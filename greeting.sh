#h=`date +%H`
#h=$1
u=`whoami`
set -- `who`
for i in $*
do
user1=$1
if [ $u = $user1 ]
then
set -- `echo $4 | tr ":" " "`
h=$1
if [ $h -ge 4 ] && [ $h -lt 12 ]
then
echo "Good Morning $u"
elif [ $h -ge 12 ] && [ $h -lt 16 ]
then
echo "Good Afternoon $u"
elif [ $h -ge 16 ] && [ $h -lt 10 ]
then
echo "Good Evening $u"
else
echo "Good Night $u"
fi
exit
else
shift 5
fi
done
