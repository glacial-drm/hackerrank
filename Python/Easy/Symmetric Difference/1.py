# tags - std-lib set
# date - 2026/xx/xx
# score - 10.00/10.00

# Enter your code here. Read input from STDIN. Print output to STDOUT

a_size = input()
a = set(map(int, input().split()))
b_size = input()
b = set(map(int, input().split()))

sym_diff = list(a.symmetric_difference(b))
sym_diff.sort()
for i in sym_diff:
    print(i)
