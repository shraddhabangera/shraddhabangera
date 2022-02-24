if [ -e $1 ]
then
set -- `ls -ld $1`
echo "permission= $1"
echo "Links= $2"
echo "User= $3"
echo "Group= $4"
echo "Filesize= $5"
echo "Month= $6"
echo "Date= $7"
echo "Time/Year= $8"
echo "Fimename= $9"
echo "File Modification done on $6 $7 are $8"
else
echo "File not exists"  
fi
