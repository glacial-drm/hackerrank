# tags - math base-change fstring input cast
# date - 2026/xx/xx
# score - 10.00/10.00

def print_formatted(number):
    pd = len(bin(number)) - 2 # padding
    
    for i in range(1, number+1):
        print(f"{i:>{pd}} {oct(i)[2:]:>{pd}} {hex(i).upper()[2:]:>{pd}} {bin(i)[2:]:>{pd}}")

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
