l = []
with open('input1p1.txt', 'r') as f:
    for i in f.readlines():
        l.append(int(i.replace("\n", '')))


count = 0

prev = 0

flag = 0

for n in range(3, len(l)):
    if sum(l[flag:n]) > prev:
        count += 1
    prev = sum(l[flag:n])
    flag += 1

print(count)
