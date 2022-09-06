echo -e "Reg No. Name    M1  M2  M3  M4  M5   Total  Percentage  Grade"
echo ".............................................................."
filename='marks.txt'
while read p; do

reg=$(echo $p | cut -f1 -d,)
name=$(echo $p | cut -f2 -d,)
m1=$(echo $p | cut -f3 -d,)
m2=$(echo $p | cut -f4 -d,)
m3=$(echo $p | cut -f5 -d,)
m4=$(echo $p | cut -f6 -d,)
m5=$(echo $p | cut -f7 -d,)
((total_marks=m1+m2+m3+m4+m5))
((percentage=total_marks/5))
if (($percentage>=90))
then
grade="S"

elif (($percentage>=80 & $percentage<90))
then
grade="A"
elif (($percentage>=70 & $percentage<80))
then
grade="B"
elif (($percentage>=60 & $percentage<70))
then
grade="C"
elif (($percentage>=50 & $percentage<60))
then
grade="D"
elif (($percentage>=40 & $percentage<50))
then
grade="E"
else
grade= "F"
fi
echo -e "  $reg    $name  $m1  $m2  $m3  $m4  $m5\t$total_marks\t$percentage% \t $grade"

done < $filename
