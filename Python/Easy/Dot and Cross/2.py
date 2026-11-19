# tags - numpy wildcard math
# date - 2026/xx/xx
# score - 20.00/20.00

import numpy

dim = int(input())
arrs = []
A = []
B = []
for i in range(2):
    
    for _ in range(dim):
        arrs.append(list(map(int, input().split())));
    
    if(i == 0):
        A = numpy.array(arrs.copy())
    else:
        B = numpy.array(arrs.copy())
    arrs.clear()


print(numpy.dot(A, B))
