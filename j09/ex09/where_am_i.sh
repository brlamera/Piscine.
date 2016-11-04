OUTPUT=$(ifconfig | grep "inet " | grep -v "127.0.0.1" | awk '{print $2}');
if [ "$OUTPUT" == "" ] ; then
	echo "Je suis perdu!";
else
	echo "$OUTPUT";
fi

