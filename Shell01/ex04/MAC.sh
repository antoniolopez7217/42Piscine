ifconfig | grep 'ether ' | tr -d "[:blank:]" | sed 's/ether//'
