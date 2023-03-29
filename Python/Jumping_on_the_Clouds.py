#https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?isFullScreen=false

def jumpingOnClouds(c):
    # Write your code here
    jump = 0
    cnt = 0
    while cnt < len(c)-1:
        jump += 1
        cnt += 2 if cnt+2 < len(c) and not c[cnt+2] else 1
        
    return jump
