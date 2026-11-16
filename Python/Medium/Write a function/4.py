# tags - math input cast
# date - 2026/02/xx
# score - 10.00/10.00
# error - incorrect

def is_leap(year):
    leap = False
    
    # Write your logic here
    if(not(year%4)):
        leap = True
        
        if(year >= 100 and not(year % 100)):
            leap = False
            
            if(year >= 400 and not(year%400)):
                leap = True
        
    
    return leap

year = int(input())
print(is_leap(year))
