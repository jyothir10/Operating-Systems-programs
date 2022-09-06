#variables and expressions

a=10
b=20

: 'The following expression
evaluates an expression'

((c=a+b))
echo c = $c
d=`expr $a + $b`
echo d = $d


