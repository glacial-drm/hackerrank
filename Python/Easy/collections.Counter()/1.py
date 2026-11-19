# tags - std-lib input exception
# date - 2026/xx/xx
# score - 10.00/10.00

from collections import Counter
# Enter your code here. Read input from STDIN. Print output to STDOUT

shoeNum = input()
shoeCounter = Counter(input().split())
customerNum = input()

money = 0
try:
    while(encounter := input().split()):
        if(shoeCounter[encounter[0]] > 0):
            shoeCounter[encounter[0]] -= 1
            money += int(encounter[1])
except EOFError:
    pass

print(money)
