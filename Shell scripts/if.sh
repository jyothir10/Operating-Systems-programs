
#user input

#echo -n "Enter your name "
#read name
#echo "Welcome $name to OS Lab"

#echo -n "Enter a number "
#read n

#if (( $n%2 == 1 ))
#then
#	echo $n is Odd 
#else
#	echo $n is Even
#fi

#echo "Username"
#read username
#echo "Password"
#read password

#if [[ ( $username  ==  "admin" && $password  ==  "secret" ) ]]
#then
#	echo "valid user"
#else
#	echo "invalid user"
#fi

#echo "Enter a binary digit"
#read n

#if [[ ( $n -eq 0 || $n  -eq 1 ) ]]
#then
#	echo "Correct!!!"
#else
#	echo "Wrong!"
#fi

echo "Enter your choice"
read n

if (($n==1))
then
	echo "ONE"

elif (($n==2))
then
	echo "TWO"
elif (($n==3))
then
	echo "THREE"
else
	echo "INVALID"
fi

