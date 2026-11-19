# tags - numpy input 
# date - 2026/xx/xx
# score - 20.00/20.00

import numpy

def arrays(arr):
    arr.reverse()
    return numpy.array(list(map(float, arr)))

arr = input().strip().split(' ')
result = arrays(arr)
print(result)
