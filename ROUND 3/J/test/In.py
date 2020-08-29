import random

for test in range(1, 16):
    File = open(str(test) + '.in', 'w')
    T = random.randint(1, 100)
    File.write(str(T) + '\n')
    for _ in range(T):
        n = random.randint(1, int(1e9))
        File.write(str(n) + '\n')