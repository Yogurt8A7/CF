n,k=map(int,input().split())
time=0
ans=0
for i in range(1,n+1):
    time+=5*i
    if (240-time >= k): ans=i
    else:break
print(ans)