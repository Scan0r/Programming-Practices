#!/usr/bin/env python3

# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == '__main__':
    n1 = int(input())
    n2 = int(input())
    divmod_tuple = divmod(n1, n2)
    div = divmod_tuple[0]
    mod = divmod_tuple[1]
    print(div)
    print(mod)
    print(divmod_tuple)

