# tags - limits array search cast input
# date - 2026/10/07
# score - 2.22/10.00
# error - incorrect

import sys
from math import isclose
if __name__ == '__main__':
    minScore = sys.maxsize
    nextMinScore = 0
    minName = ""
    nextMinName = ""
    names = []
    
    for _ in range(int(input())):
        name = input()
        score = float(input())
        
        if(score < minScore):
            minScore = nextMinScore; minName = nextMinName
            nextMinScore = score; nextMinName = name
            
            names.clear()
            names.append(nextMinName)
        elif(score == nextMinScore):
            names.append(name)

    names.sort()            
    for n in names:
        print(n)
