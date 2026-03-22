import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

for _ in range(int(input())):
    n = int(input())
    mat = [list(map(int, input().strip())) for _ in range(n)]

    count = [mat[i].count(1) for i in range(n) if mat[i].count(1) > 0]
    count = set(count)
    print("SQUARE" if len(count)==1 else "TRIANGLE")