import random

for test in range(1, 16):
    File = open(str(test) + '.in', 'w')
    n = random.randint(1,50)
    m = random.randint(1,50)
    File.write(str(n) + ' ' + str(m) + '\n')
    for i in range(n):
        for j in range(m):
            File.write(str(random.randint(0,1)) + ' ')
        File.write('\n')
    