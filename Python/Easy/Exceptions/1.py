# tags - exception wildcard cast input fstring math
# date - 2026/xx/xx
# score - 10.00/10.00

# Enter your code here. Read input from STDIN. Print output to STDOUT

for _ in range(int(input())):
    try:
        a, b = map(int, input().split())
        print(f"{a//b}")
    except ZeroDivisionError as e:
        print("Error Code:",e)
    except ValueError as f:
        print("Error Code:",f)
