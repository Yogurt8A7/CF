a,b=map(int,input().split())
cnt=1
while(a<b):
    a*=3
    b*=2
    cnt+=1
print(cnt)