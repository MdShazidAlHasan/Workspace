def checkPossibility(nums: list[int]) -> bool:
    prev = 0
    count = 0
    while count < len(nums)-1:
        print(count)
        print(nums)
        if prev ==2:
            return False
        if nums[count] > nums[count+1]:
            print(nums[count])
            nums[count] = nums[count+1]
            prev += 1
            count = 0
        elif 
        else:
            count += 1
    else:
        return True

