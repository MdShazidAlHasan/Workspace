def countVowelPermutation(n):
    dp = {'a':1, 'e':1, 'i':1, 'o':1, 'u':1}
    mod = 10**9 +7
    for j in range(n-1):
        a, e, i, o, u = dp['a'], dp['e'], dp['i'], dp['o'], dp['u']
        dp['a'] = e % mod
        dp['e'] = a + i % mod
        dp['i'] = a + e + o + u % mod
        dp['o'] = i + u % mod
        dp['u'] = a % mod

    return sum((i for i in dp.values())) % mod
