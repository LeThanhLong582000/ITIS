import bisect as bs
s = str(input())
a,b = [],[]
for i in range(len(s)):
    if s[i] == '1': a.append(i)
    elif s[i] == '2': b.append(i)
m,res = len(b),0
for x in a:
    pos = bs.bisect_right(b,x,0,m)
    res += m - pos
print(res) 