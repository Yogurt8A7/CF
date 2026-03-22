import sys
input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    A = list(map(int, input().split()))
    if 67 in A:
        print("YES")
    else:
        print("NO")
