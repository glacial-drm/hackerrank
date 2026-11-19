# tags - list-comprehension iterator foreach string fstring search
# date - 2026/xx/xx
# score - 10.00/10.00

from re import finditer

def count_substring(string, sub_string):
    i = 0
    sub_string_list = [m.start() for m in finditer(f'(?={sub_string})', string)]
    
    if(sub_string_list):
        return len(sub_string_list)
    return 0
        
    

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
