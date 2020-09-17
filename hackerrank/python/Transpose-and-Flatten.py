#!/usr/bin/env python3

import numpy
import sys

if __name__ == '__main__':
    lines = sys.stdin.readlines()
    dims = [int(d) for d in lines[0].split(" ")]
    N, M = dims[0], dims[1]
    matrix = []
    for line in lines[1:]:
        matrix.append([int(num) for num in line.split(" ")])
    nparr = numpy.array(matrix)
    print(numpy.transpose(matrix))
    print(nparr.flatten())

