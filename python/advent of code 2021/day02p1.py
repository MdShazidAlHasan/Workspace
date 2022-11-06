l = []
with open('input2p1.txt', 'r') as f:
    for i in f.readlines():
        l.append(i)
#l = ['forward 5', 'down 5', 'forward 8', 'up 3', 'down 8', 'forward 2']
x = 0
y = 0

for i in l:
    if 'forward' in i:
        x += int(i.split()[1])
        print('forward')
    elif 'up' in i:
        y -= int(i.split()[1])
        print('up')
    elif 'down' in i:
        print('down')
        y += int(i.split()[1])

    else:
        print('exception')
    print('x', x,'  ','y', y, end= '\n')

print(x*y)



