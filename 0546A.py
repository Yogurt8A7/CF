k, n, w = map(int, input().split())

all_costs = (w*(w+1)//2)*k
if n >= all_costs: print(0)
else: print(all_costs - n)