# tags - list-comprehension iterator foreach string search
# date - 2026/xx/xx
# score - 0.00/10.00
# error - incorrect

from re import finditer

def count_substring(string, sub_string):
    i = 0
    sub_string_list = [m.start() for m in finditer(sub_string.lower(), string.lower())]
    
    if(sub_string_list):
        return sub_string_list[0]
    return 0
        
    

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
