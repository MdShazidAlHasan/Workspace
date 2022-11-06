def rob(nums):
        prev, result = 0,0
        for i in nums:
            temp = max(prev+i, result)
            prev = result
            result = temp
            print(prev, result)
        return prev
