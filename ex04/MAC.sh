#/bin/bash

ifconfig | grep "ether" | tr --squeeze-repeats ' ' '\t' | cut --field=3