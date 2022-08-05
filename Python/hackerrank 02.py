#https://www.hackerrank.com/challenges/py-set-discard-remove-pop/problem
m = int(input())

lst = set(map(int, input().split()))

for _ in range(int(input())):
    st = input().split()
    if st[0] != "pop":
        eval("lst."+st[0]+"("+st[1]+")")
    else:
        eval("lst."+st[0]+"("+")")

print(sum(lst))
