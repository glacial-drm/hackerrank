# tags - list-comprehension math
# date -
# score -

from itertools import permutations

# Enter your code here. Read input from STDIN. Print output to STDOUT

s, k = input().split()

perms = ["".join(i) for i in list(permutations(s, int(k)))]

for perm in sorted(perms):
    print(perm)
