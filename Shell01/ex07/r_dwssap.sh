cat /etc/passwd | grep -v '^#' | sed -n 'n;p' | rev | grep -o '[^:]*$' | sort -r | awk -v line_one="$FT_LINE1" -v line_two="$FT_LINE2" 'NR==line_one,NR==line_two' | paste -sd ',' - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'

