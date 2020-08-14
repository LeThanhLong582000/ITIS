for test in range(1, 16):
    In = open(str(test) + '.in', 'r')
    Out = open(str(test) + '.out', 'w')
    t = int(In.readline())
    for _ in range(t):
        a, b = map(int, In.readline().split())
        Out.write(str(a * (len(str(b + 1)) - 1)) + '\n')