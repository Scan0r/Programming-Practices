#!/usr/bin/env python3

if __name__ == '__main__':
    N = int(input())
    mylist = []
    for _ in range(0, N):
        line = input()
        args = line.split(" ")
        if args[0] == 'print':
            print(mylist)
        elif args[0] == 'insert':
            mylist.insert(int(args[1]), int(args[2]))
        elif args[0] == 'append':
            mylist.append(int(args[1]))
        elif args[0] == 'remove':
            mylist.remove(int(args[1]))
        elif args[0] == 'sort':
            mylist.sort()
        elif args[0] == 'reverse':
            mylist.reverse()
        elif args[0] == 'pop':
            mylist.pop()

