awk '{
    if (NR % 2 == 0)
        print last_line ";" $0
    else
        last_line = $0   
}

END {
    if (NR % 2 != 0)
        print last_line ";" 
}' $1
