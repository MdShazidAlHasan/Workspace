l = []
with open('input2p2.txt', 'r') as f:
    for i in f.readlines():
        l.append(i)
#l = ['forward 5', 'down 5', 'forward 8', 'up 3', 'down 8', 'forward 2']
x = 0
y = 0
a = 0

for i in l:
    if 'up' in i:
        a -= int(i.split()[1])
        print('up')
    elif 'down' in i:
        a += int(i.split()[1])
        print('down')
    elif 'forward' in i:
        x +=  int(i.split()[1])
        y += a *  int(i.split()[1])
        print('forward')
    else:
        print('exception')
    print('x', x,'  ','y', y, "a", a ,end= '\n')

print(x*y)


