# tags - math input cast
# date - 2026/02/xx
# score - 8.00/10.00
# error - incorrect

def is_leap(year):
    leap = False
    
    # Write your logic here
    if(not(year%4) or ((year%100) and not(year%400))):
        leap = True
    
    return leap

year = int(input())
print(is_leap(year))
