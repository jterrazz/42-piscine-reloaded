ifconfig | grep 'ether' | cut -c 8- | sed 's/ $//'
