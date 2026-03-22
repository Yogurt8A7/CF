import sys
input = sys.stdin.readline

n, p1, p2, p3, t1, t2 = map(int, input().split())

total_power = 0
prev_r = None

for _ in range(n):
    l, r = map(int, input().split())
    total_power += (r - l) * p1

    if prev_r is not None:
        gap = l - prev_r
        d1 = min(gap, t1)
        d2 = min(gap - d1, t2)
        d3 = max(0, gap - d1 - d2)
        
        total_power += (d1 * p1) + (d2 * p2) + (d3 * p3)
    
    prev_r = r

print(total_power)
