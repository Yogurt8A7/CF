import sys; input = sys.stdin.readline

# 1974A - Phone Desktop, contest #946 div.3
t = int(input())
while (t > 0): 
    x, y = map(int, input().split())
    screens = (y+1)//2

    remaining = 15*screens - 4*y
    if x > remaining:
        x -= remaining
        screens += (x + 14)//15
    print(screens)
    t -= 1