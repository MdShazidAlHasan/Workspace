def isPowerofFour(n):
    for i in range(n):
        if 4**i==n:
            return True
    return False

print(isPowerofFour(5))