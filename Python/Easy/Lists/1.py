# tags - tokenise array input cast
# date - 2026/xx/xx
# score - 10.00/10.00

if __name__ == '__main__':
    arr = []
    for _ in range(int(input())):
        
        tokens = input().split()
        
        match str(tokens[0]):
            case "append":
                arr.append(int(tokens[1]))
            case "insert":
                arr.insert(int(tokens[1]), int(tokens[2]))
            case "print":
                print(arr)
            case "remove":
                arr.remove(int(tokens[1]))
            case "sort":
                arr.sort()
            case "pop":
                arr.pop()
            case "reverse":
                arr.reverse()
