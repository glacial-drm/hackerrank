# tags - string tokenise
# date - 2026/xx/xx
# score - 04.00/20.00

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    sList = s.split(" ")
    
    sList[0] = sList[0].capitalize()
    sList[1] = sList[1].capitalize()
    
    return " ".join(sList)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
