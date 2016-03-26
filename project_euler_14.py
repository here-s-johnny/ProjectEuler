import time
start = time.time()

limit = 1000000
length = [0] * limit
length[1] = 1
max_length = [1,1]

for i in range(1,limit):
    n,s = i,0
    to_add = [] # not yet registered
    while n > limit - 1 or length[n] < 1:
        to_add.append(n)
        if n % 2 == 0: 
            n = n/2
        else:
            n = 3 * n + 1
        s += 1;
    for j in range(s):
        m = to_add[j]
        if m < limit:
            length[m] = length[n] + s - j
            if length[m] > max_length[1]:
                max_length = [i, length[m]]


elapsed = time.time() - start
print "result at %s equal to %s, time: %s" % (max_length[0], max_length[1], elapsed)