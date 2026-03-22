import sys
input = sys.stdin.readline

n, m = map(int, input().split())

picture = []
for _ in range(n):
    line = input().strip()
    picture.append(line)

for line in picture:
    if line == '.'*m:
        picture.remove(line)
for line in picture:
    print(line)