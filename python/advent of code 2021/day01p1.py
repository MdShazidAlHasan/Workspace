l = []
with open('input1p1.txt', 'r') as f:
    for i in f.readlines():
        l.append(int(i.replace("\n", '')))


count = 0

prev = l[0]

for n in l[1:]:
    print(n)
    print(prev)
    if n> prev:
        count +=1
    prev = n
    print("-----------------------")

print(count)


