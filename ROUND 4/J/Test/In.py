import random

for test in range(1, 16):
    File = open(str(test) + '.in', 'w')
    if test <= 5:
        n = random.randint(1, 20)
    elif test <= 10:
        n = random.randint(1, 100)
    elif test <= 13:
        n = random.randint(1, 2020)
    else:
        n = random.randint(1, int(1e5))
    print('Test:', test, n)
    File.write(str(n) + '\n')
    for _ in range(n):
        ans = random.randint(0, int(1e9))
        File.write(str(ans) + ' ')
    File.close()