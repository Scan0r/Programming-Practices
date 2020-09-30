#!/usr/bin/env python3

"""
In the first line, print True if has any alphanumeric characters. Otherwise, print False.
In the second line, print True if has any alphabetical characters. Otherwise, print False.
In the third line, print True if has any digits. Otherwise, print False.
In the fourth line, print True if has any lowercase characters. Otherwise, print False.
In the fifth line, print True if has any uppercase characters. Otherwise, print False. 
"""
if __name__ == '__main__':
    s = input()
    print(len([c for c in range(len(s)) if s[c].isalnum()])>0)
    print(len([c for c in range(len(s)) if s[c].isalpha()])>0)
    print(len([c for c in range(len(s)) if s[c].isdigit()])>0)
    print(len([c for c in range(len(s)) if s[c].islower()])>0)
    print(len([c for c in range(len(s)) if s[c].isupper()])>0)
