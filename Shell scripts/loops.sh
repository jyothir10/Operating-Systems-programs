
#while, for loops

#count=1
#while [ true ]
#do
#echo -n $count
#if [ $count -eq 10 ]
#	then
#		break
#fi
#((count++))
#done
#printf "\n"

count=1
while (( $count <=  5 ))
do
	echo $count
	((count++))
done

#for ((counter = 1;$counter<=10;counter++))
#do
#echo -n "$counter "
#done
printf "\n"

