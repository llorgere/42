ifconfig -a | grep "ether" | sed "s/ether*//" | cut -c3- | rev | cut  -c2- | rev
