l = []
with open('input1p1.txt', 'r') as f:
    for i in f.readlines():
        l.append(i.replace("\n", ''))

print(l)
