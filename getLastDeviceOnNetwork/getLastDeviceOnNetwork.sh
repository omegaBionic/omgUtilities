#!/bin/bash

DEBUG="true"
PORT="22,80,443"

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
    echo "[Debug] NETWORK_IPV4: '"${NETWORK_IPV4}"'"
fi

### main ###
# first scan
RET_SCAN_IPV4_FIRST=$(nmap -p $PORT $NETWORK_IPV4 --open | grep "Nmap scan report for" | awk '{print $5}')
if $DEBUG; then
    echo "RET_SCAN_IPV4_FIRST: ["
    for IPV4 in $RET_SCAN_IPV4_FIRST
    do
        echo "\""$IPV4"\""
    done
    echo ']'
fi

# second scan
read -p "Press key when you want lanch the second scan." CONTINUE
RET_SCAN_IPV4_LAST=$(nmap -p $PORT $NETWORK_IPV4 --open | grep "Nmap scan report for" | awk '{print $5}')
if $DEBUG; then
    echo "RET_SCAN_IPV4_LAST: ["
    for IPV4 in $RET_SCAN_IPV4_LAST
    do
        echo "\""$IPV4"\""
    done
    echo ']'
fi

# calculate if is in list
#TODO
