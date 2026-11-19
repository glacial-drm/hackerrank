# tags - wildcard input cast foreach tokenise hashmap
# date - 2026/xx/xx
# score - 20.00/20.00

from collections import OrderedDict

dt = {}
for _ in range(int(input())):
    entry = input().split()
    item, price = " ".join(entry[:-1]), int(entry[-1])
    
    if(item not in dt):
        dt[item] = 0    
    dt[item] += price

for key, value in dt.items():
    print(key, value)
