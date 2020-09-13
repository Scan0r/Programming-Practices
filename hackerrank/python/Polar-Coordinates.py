#!/usr/bin/env python3

# Enter your code here. Read input from STDIN. Print output to STDOUT
import cmath
import re

if __name__ == '__main__':
    complex_number = input()
    axis = re.findall('([+-]?\d+)', complex_number)
    x = float(axis[0])
    y = float(axis[1])
    print(abs(complex(x, y)))
    print(cmath.phase(complex(x, y)))

