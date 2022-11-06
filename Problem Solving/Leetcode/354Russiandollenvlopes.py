def maxEnvelopes(envelopes):

    envelopes = sorted(envelopes, key = lambda x : (x[0],-x[1]))
    print(envelopes)
    size = 0
    tails = [0]*len(envelopes)
    
    for _, h in envelopes:
        l, r = 0, size-1
        while l <= r:
            mid = (l+r) // 2
            if tails[mid] >= h:
                r = mid - 1
            else:
                l = mid + 1
        
        tails[l] = h
        size = max(size, l+1)
    
    return size

print(maxEnvelopes([[2,100],[3,200],[4,300],[5,500],[5,400],[5,250],[6,370],[6,360],[7,380]]))