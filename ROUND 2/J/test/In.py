import random
def test1(test):
    File = open(str(test) + '.in', 'w')
    n = random.randint(1,100)
    for i in range(n):
        File.write(str(random.randint(0,9)))
    return
def test2(test):
    File = open(str(test) + '.in', 'w')
    n = random.randint(100,1000)
    for i in range(n):
        File.write(str(random.randint(0,9)))
    return

def test3(test):
    File = open(str(test) + '.in', 'w')
    n = random.randint(1e5,1e6)
    for i in range(n):
        File.write(str(random.randint(0,9)))
    return

for test in range(1, 16):
    if test <= 5: test1(test)
    elif 6 <= test <= 10: test2(test)
    else : test3(test)
    print("Created test " + str(test))
    
    