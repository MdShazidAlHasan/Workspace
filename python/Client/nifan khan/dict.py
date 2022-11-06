
d1 = {'Alex': ['Carl', 'Ethan'], 'Bob': ['Carl', 'David'], 'Carl': ['David', 'Alex'], 'David': ['Alex']}


d2 = {'Carl': ['Alex', 'Bob'], 'Ethan': ['Alex'], 'David': ['Bob', 'Carl'], 'Alex': ['Carl', 'David']}

d3 = {}

# s = set([i for j in d1.values() for i in j ])

for i, j in d1.items(): 
    for p in j:   
        if p in d3:
            d3[p].append(i)
        else:
            d3[p] = [i]
print(d3)
