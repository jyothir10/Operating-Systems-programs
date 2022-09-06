#case statement

echo "Enter a number"
read n

case $n in
0) echo "ZERO";;
1) echo  "ONE" ;;
2) echo "TWO";;
3) echo  "THREE" ;;
4) echo "FOUR";;
5) echo  "FIVE" ;;
6) echo "SIX";;
7) echo  "SEVEN" ;;
8) echo "EIGHT";;
9) echo  "NINE" ;;
*) echo "INVALID" ;;  #other value
esac

while((1))
do
echo "Enter a number"
read n

case $n in
0) echo "ZERO";;
1) echo  "ONE" ;;
2) echo "TWO";;
3) echo  "THREE" ;;
4) echo "FOUR";;
5) echo  "FIVE" ;;
6) echo "SIX";;
7) echo  "SEVEN" ;;
8) echo "EIGHT";;
9) echo  "NINE" ;;
*) break ;;
esac

done
