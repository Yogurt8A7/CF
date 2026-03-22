t=int(input())
for _ in range(t):
    a,b,c,d=map(int,input().split())

    cnt=0
    if (a<c<b)or(b<c<a): cnt+=1
    if (a<d<b)or(b<d<a): cnt+=1
    if cnt==1:print("YES")
    else:print("NO")