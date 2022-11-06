def lengthOfLIS( nums: list[int]) -> int:
    result = [nums[0]]

    for i in range(1, len(nums)):
        if result[-1] < nums[i]:
            print('a',nums[i])
            result.append(nums[i])
            print("1", result)
        elif result[-1] > nums[i]:
            print('b', nums[i])
            result[-1] = nums[i]
            print('2', result)

    return len(result)
