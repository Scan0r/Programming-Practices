#!/usr/bin/env python3

import numpy
import sys

if __name__ == '__main__':
    for line in sys.stdin:
        arr = [int(num) for num in line.split(" ")]
        break
    print(numpy.reshape(numpy.array(arr, int), (3,3)))

