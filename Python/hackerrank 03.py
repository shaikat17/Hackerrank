#https://www.hackerrank.com/challenges/py-collections-deque/problem
from collections import deque
d = deque()
for _ in range(int(input())):
    st = input().split()
    if 'pop' in st[0]:
        eval("d."+st[0]+"("+")")
    else:
        eval("d."+st[0]+"("+st[1]+")")

print(*d)
