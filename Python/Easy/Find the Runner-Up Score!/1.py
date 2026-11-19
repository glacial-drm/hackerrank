# tags - search array input cast
# date - 2026/10/xx
# score - 10.00/10.00

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    
    # find max
    arrMax = max(arr)
    
    # remove max
    while(arrMax in arr):
        arr.remove(arrMax)
    
    # return new max
    print(max(arr))
