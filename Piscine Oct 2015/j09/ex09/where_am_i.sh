CMD=`ifconfig | grep "inet " | grep -v 127.0.0.1 | cut -d\  -f2`
NUM=`ifconfig | grep "inet " | grep -v 127.0.0.1 | cut -d\  -f2 | wc -l`

if [ "$NUM" -eq "0" ]; then
	echo "Je suis perdu!"
else
	echo "$CMD"
fi