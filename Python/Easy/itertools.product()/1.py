# tags - fstring list-comprehension
# date - 2026/xx/xx
# score - 10.00/10.00

from itertools import product

# Enter your code here. Read input from STDIN. Print output to STDOUT

cartProd = product(list(map(int, list(input().split()))),list(map(int, list(input().split()))))

for pair in cartProd:
    print(pair, end=' ')
