# tags - hash tuple input input cast
# date - 2026/xx/xx
# score - 10.00/10.00

if __name__ == '__main__':
    n = int(input())
    hash_tuple = hash(tuple(map(int, raw_input().split())))
    
    print(hash_tuple)
