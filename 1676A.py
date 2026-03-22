t = int(input())
def sumDigit(n):
    ans = 0
    while n > 0:
        ans += n%10
        n //=10
    return ans

for _ in range(t):
    s = input().strip()
    begin = int(s[0:3])
    end = int(s[3:])
    if sumDigit(begin) == sumDigit(end): print("YES")
    else : print("NO")
