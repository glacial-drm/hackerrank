# tags - math input
# date - 2026/xx/xx
# score - 04.00/10.00
# error - runtime

import cmath
# Enter your code here. Read input from STDIN. Print output to STDOUT

x, y = input().split('+')

for c in cmath.polar(complex(int(x), int(y[0]))):
    print(c)
