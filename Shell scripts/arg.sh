#command line arguments

echo "Total arguments : $#"
echo "1st Argument = $1"
echo "2nd argument = $2"
echo "List of arguments : $@"


for arg in "$@"
do

index=$(echo $arg | cut -f1 -d=)   #a=1,  a
val=$(echo $arg | cut -f2 -d=)       #a=1, 1

case $index in
x) x=$val;;
y) y=$val;;
*) 
esac

done

((result=x+y))
echo "x + y = $result"

