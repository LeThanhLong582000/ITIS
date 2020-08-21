import bisect as bs
for test in range(1, 16):
    In = open(str(test) + '.in', 'r')
    Out = open(str(test) + '.out', 'w')
    s = str(In.readline())
    a,b = [],[]
    for i in range(len(s)):
        if s[i] == '1': a.append(i)
        elif s[i] == '2': b.append(i)
    m,res = len(b),0
    for x in a:
        pos = bs.bisect_right(b,x,0,m)
        res += m - pos
    Out.write(str(res))