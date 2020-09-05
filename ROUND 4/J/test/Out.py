for test in range(1, 16):
    File_In = open(str(test) + '.in', 'r')
    File_Out = open(str(test) + '.out', 'w')
    n = int(File_In.readline())
    a = list(map(int, File_In.readline().split()))
    if n > 2020:
        File_Out.write(str(0))  
    else:
        ans = 1
        for i in range(n):
            for j in range(i+1, n):
                ans = (ans * abs(a[i] - a[j])) % 2020
        File_Out.write(str(ans))
    File_In.close()
    File_Out.close()