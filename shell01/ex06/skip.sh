#ls -l | sed 'n;d'
ls -l | awk ' NR % 2 != 0 '
