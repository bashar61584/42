#!/bin/sh
#command=$(id -Gn $FT_USER | tr ' ' ',')  
#export PS1="$command$>"
id -Gn $FT_USER | tr ' ' ','
