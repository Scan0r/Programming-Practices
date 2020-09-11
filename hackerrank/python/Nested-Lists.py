#!/usr/bin/env python3

if __name__ == '__main__':
    students = []
    for _ in range(0, int(input())):
        students.append([input(), float(input())])

    second_highest = sorted(list(set([mark for name, mark in students])))[1]
    print('\n'.join([name for name, mark in sorted(students) if mark == second_highest]))

