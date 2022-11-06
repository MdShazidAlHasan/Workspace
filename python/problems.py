def twoSum(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    for i in nums:
        if target-i in nums:
            if nums.index(i) == nums.index(target-i):
                continue
            return [nums.index(i), nums.index(target-i)]
        

print(twoSum([3,3], 6))
