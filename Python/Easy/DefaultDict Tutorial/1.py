# tags - list-comprehension hashmap foreach input wildcard
# date - 2026/xx/xx
# score - 20.00/20.00

from collections import defaultdict

a_size, b_size = list(map(int, input().split()))

d = defaultdict()
d['a'] = [input() for _ in range(a_size)]
d['b'] = [input() for _ in range(b_size)]

for val in d['b']:
    
    if val in d['a']:
        occurrences = [pos+1 for pos, value in enumerate(d['a']) if val == value]
        
        for oc in occurrences:
            print(oc, end=" ")
        print()
    else:
        print("-1")
