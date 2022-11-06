def printMaxNum(num):

    # Initialising hash array
    hash = []
    for i in range(0, 10):
        hash.append(0)

    if(num < 0):
        n = num * -1
    else:
        n = num

    ans = 0
    while (n != 0):
        hash[int(n % 10)] = hash[int(n % 10)] + 1
        n = n // 10
    print(hash)
    # If positive number
    if (num > 0):
        for i in range(9, -1, -1):
            for j in range(0, hash[i]):
                ans = ans * 10 + i
    return ans

print(printMaxNum(25180769))