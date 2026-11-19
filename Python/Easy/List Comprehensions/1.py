# tags - array cast input
# date - 2026/10/11
# score - 10.00/10.00

if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    
    perms = [[i, j, k] for i in range(x+1) for j in range(y+1) for k in range(z+1) if i+j+k != n];
    
    print(perms)
