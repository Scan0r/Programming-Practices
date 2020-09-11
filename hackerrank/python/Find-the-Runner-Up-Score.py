#!/usr/bin/env python3

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    maxvalue = runnerup = -100
    for value in arr:
        if value > maxvalue:
            runnerup = maxvalue
            maxvalue = value
        elif value > runnerup and value < maxvalue:
            runnerup = value
    print(runnerup)

