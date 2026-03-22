import sys
input = sys.stdin.readline

def calc(a, b):
    ans = 0
    for c1, c2 in zip(a, b):
        ans += abs(ord(c1)-ord(c2))
    return ans

t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    strings = [input().strip() for _ in range(n)]

    res = float('inf')
    for i in range(n):
        for j in range(i+1, n):
            res = min(calc(strings[i], strings[j]), res)
    print(res)
