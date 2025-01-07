echo Enter the value of n
read n
x=0
y=1
for((i=1;i<=n;i++))
do
echo $x
f=$(($x+$y))
x=$y
y=$f
done
