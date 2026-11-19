# tags - typeof list-comprehension string input
# date -
# score -

if __name__ == '__main__':
    s = input()
    
    # iterate over all chars
        # check the relevant conditions
    chTypes = [False for _ in range(5)] # could use ordered dict for scalability, and to prevent hardcoding
    for ch in s:
        
        if(not chTypes[0] and ch.isalnum()):
            chTypes[0] = True
        if(not chTypes[1] and ch.isalpha()):
            chTypes[1] = True
        if(not chTypes[2] and ch.isdigit()):
            chTypes[2] = True
        if(not chTypes[3] and ch.islower()):
            chTypes[3] = True
        if(not chTypes[4] and ch.isupper()):
            chTypes[4] = True
            
            
    for bl in chTypes:
        print(bl)
