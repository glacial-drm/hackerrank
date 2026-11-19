# tags - tokenise
# date - 2026/xx/xx
# score - 10.00/10.00

def split_and_join(line):
    # write your code here
    line = line.split(" ")
    
    return "-".join(line)

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
