
lines = i.splitlines()
main = ''
rever = ''
l = [0]* 5
for line in lines:
    for a, c in zip(range(len(line)), line):
            l[a] += int(c)

for i in l:
    if i > len(lines)/2:
        main = main + '1'
        rever = rever + '0'
    else:
        main = main + '0'
        rever = rever + '1'


