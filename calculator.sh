echo Enter first number
read a
echo Enter second number
read b
echo "Enter the operation: 1 for Addition; 2 for Substraction; 3 for Multiplication; 4 for Division"
read op
case $op in
1) rs=$(($a+$b))
echo $rs;;
2) rs=$(($a-$b))
echo $rs;;
3) rs=$(($a*$b))
echo $rs;;
4) rs=$(($a/$b))
echo $rs;;
*) echo wrong choice
esac
