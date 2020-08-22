import random

for test in range(1, 16):
    File = open(str(test) + '.in', 'w')
    t = random.randint(1, 101)
    File.write(str(t) + '\n')
    for _ in range(t):
        File.write(str(random.randint(1, int(1e9))) + ' ' + str(random.randint(1, int(1e9))) + '\n')