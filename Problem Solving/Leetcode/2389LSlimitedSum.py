def answerQueries( nums, queries) :
    n = len(nums)
    nums.sort()
    answer = []
    for i in queries:
        left = 0
        right = 0
        while right<=n:
            if sum(nums[left:right])<=i:
                right+=1
                continue
            else:
                left +=1
            right +=1
        print(right-left)
        answer.append(right-left-1)    
    return answer
nums = [2,3,4,5] 
queries = [3,10,21]
print(answerQueries(nums, queries))