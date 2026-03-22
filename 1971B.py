for _ in range(int(input())):
    s = input().strip()
    n=len(s)
    found = False
    for i in range(n-1):
        if s[i]!= s[i+1]:
            print("YES\n" + s[:i]+s[i+1]+s[i]+s[i+2:])
            found = True
            break
    if not found:
        print("NO")