awk '{
    grade = "";
    avg_grade = ($2 + $3 + $4)/3;
    if (avg_grade >= 80)
        grade="A";
    else if (avg_grade >= 60)
        grade="B";
    else if (avg_grade >= 50)
        grade="C";
    else
        grade="FAIL";
    print $0 " : " grade;
}' $1
