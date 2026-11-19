# tags - input cast std-lib function list-comprehension math
# date - 
# score - 

def average(array):
    
    s = set(array)
    
    return sum(s) / len(s)

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
