#!/bin/bash

if [ $# -eq 1 ] ; then
    DESTINATION=$1
else
    echo -e "\n\033[31m  ----- OMG -----\033[0m"
    echo "1) computer-001"
    echo "2) computer-002"
    echo "3) computer-003"
    echo -e "\033[31m          -----\033[0m"
    read -p "Which host? " DESTINATION
fi

PORT="22"
case "${DESTINATION}" in
    1)
        USER="user"
        HOST="ip/dns"
        PASSWORD="psw"
	      ;;
    2)
        USER="user"
        HOST="ip/dns"
        PASSWORD="psw"
        ;;
    3)
        USER="user"
        HOST="ip/dns"
        PASSWORD="psw"
        ;;
    *)
        echo "Error !!!!"
        ;;
esac

if [[ -z "${PASSWORD}" ]];
then
    ssh -X -p ${PORT} ${USER}@${HOST}
else
    sshpass -p ${PASSWORD} ssh -X -p ${PORT} ${USER}@${HOST}
    SSHPASS_RETURN=$?
    if [[ $SSHPASS_RETURN -ne 0 ]]; then
        echo $(man sshpass |grep "$SSHPASS_RETURN      ")
    fi
fi
