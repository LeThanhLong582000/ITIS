a = []
n,m = map(int,input().split())
def checkOne(col):
    cnt = 0
    for i in range(n):
        cnt += a[i][col]
    if cnt < n//2 + n%2:
        return True
    else : 
        return False
    
for _ in range(n):
    b = list(map(int,input().split()))
    a.append(b)

for i in range(n):
    if a[i][0] == 0:
        for j in range(m):
            a[i][j] = 1 - a[i][j]

for j in range(1,m):
    if checkOne(j) == True:
        for i in range(n):
            a[i][j] = 1 - a[i][j]

res = 0
for i in range(n):
    x = 0
    for j in range(m-1,-1,-1):
        if a[i][j] == 1:
            x += pow(2,m - 1 - j)
    res += x
print(res)