import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

for _ in range(int(input())):
    s = input().strip()
    a = s.count('A')
    b = s.count('B')
    print('A' if(a>b) else 'B')