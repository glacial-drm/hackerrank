# tags - math input cast
# date - 2026/02/xx
# score - 10.00/10.00

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())

    if(not(n % 2)):
        if(2 <= n and n <= 5):
            print("Not Weird")
        elif(6 <= n and n <= 20):
            print("Weird")
        elif(20 < n):
            print("Not Weird")
    else:
        print("Weird")
