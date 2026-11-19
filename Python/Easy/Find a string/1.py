# tags - list-comprehension iterator foreach string search
# date - 2026/xx/xx
# score - 0.00/10.00
# error - runtime

from re import finditer

def count_substring(string, sub_string):
    i = 0
    sub_string_list = [match.start() for match in finditer(sub_string, string)]
    return sub_string_list[0]
        
    

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
