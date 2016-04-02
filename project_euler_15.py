import time
start = time.time()



# first thought - too slow for the problem of size 20



# MAX_X = 2
# MAX_Y = 2

# counter = 0

# def lattice(x,y):
#     global counter
#     if x <= MAX_X and y <= MAX_Y:
#         if x == MAX_X and y == MAX_Y:
#             counter += 1;
#         lattice(x+1, y)
#         lattice(x, y+1)

# lattice(0,0)
# elapsed = time.time()-start

# print "counted: %s in %s" % (counter, elapsed)



SIZE = 20

L = [1] * SIZE
for i in range(SIZE):
    for j in range(i):
        L[j] = L[j] + L[j-1]
    L[i] = 2 * L[i-1]

elapsed = time.time()-start
print "counted: %d in %d" % (L[SIZE-1], elapsed)