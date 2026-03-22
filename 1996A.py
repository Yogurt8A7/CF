def solve(n):
    ans = n//4
    n%=4
    if n%4==0:
        return ans
    else: return ans + 1
for _ in range(int(input())):
    print(solve(int(input())))