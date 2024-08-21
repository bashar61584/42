# удалить комментарии, вывод по номеру строки, сортировка,  
#FT_LINE1=7
#FT_LINE2=15
#command=$(cat /etc/passwd | sed -e '/^#/d' -e '/^$/d' | sed -n "${FT_LINE1},${FT_LINE2}p" | sort -r | sed 's/:.*//' | tr '\n' ', ' | sed 's/,/, /g' | sed 's/, $/./')
#command=$(cat /etc/passwd | sed -e '/^#/d' -e '/^$/d' | sed -n "${FT_LINE1},${FT_LINE2}p" | sort -r | sed 's/:.*//' | rev | tr '\n' ', ' | sed 's/,/, /g' | sed 's/, $/./')
#export PS1="$command$"
#cat /etc/passwd | sed -e '/^#/d' -e '/^$/d' | sed -n "${FT_LINE1},${FT_LINE2}p" | sort -r | sed 's/:.*//' | rev | tr '\n' ', ' | sed 's/,/, /g' | sed 's/, $/./'
cat /etc/passwd | sed -e '/^#/d' -e '/^$/d' | sed -n "${FT_LINE1},${FT_LINE2}p" | sed 's/:.*//' | rev | sort -r | tr '\n' ', ' | sed 's/,/, /g' | sed 's/, $/./'
