mat = [[0,0,0,0,0,0]]
for _ in range(5):
    mat.append([0]+list(map(int,input().split())))
r, c = 0, 0
for row in range(1, 5+1):
    for col in range(1, 5+1):
        if mat[row][col] == 1:
            r=row
            c=col
            break
print(abs(3-r)+abs(3-c))
