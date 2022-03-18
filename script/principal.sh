#!/system/bin/sh
export Loop

read hello_w
case $hello_w in
Written:)
read string
printf "$string\n" ;;

text:)
read string
echo "$string" ;;

Value:)
read numbers 
shell_values=`expr $numbers`
echo $shell_values ;;

@_system_operator[!]_:)
read binary 
((x=$binary))
echo $x ;;

Pen:)
read ;;

esac 