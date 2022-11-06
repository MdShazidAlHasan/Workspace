def build(arr, x, y, c):
    if x==y or arr[x-1]>=arr[x]:
        return c
    return build(arr, x+1, y, c+1)
a = build([1, 3, 5, 4, 8], 1, 5, 1)
print(a)