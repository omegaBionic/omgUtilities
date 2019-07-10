#!/bin/bash


DEBUG=true

### arg(s) ###
# get arg(s)
if [ $# -eq 1 ]; then
    NETWORK_IPV4=$1
else
    /bin/echo "In first parameter enter your network like that \"192.168.1.*\""
    read -p "Input your network: " NETWORK_IPV4 
fi
# show arg(s) if $DEBUG == true
if $DEBUG; then
    echo "NETWORK_IPV4: "${NETWORK_IPV4}
fi

### main ###
# TODO
