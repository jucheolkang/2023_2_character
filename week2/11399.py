a = int(input())
b = list(map(int, input().split()))
b.sort()


d = 0
e = []

for i in b:
    d = d + i
    e.append(d)
    
g = 0

for f in e:
    g += f

print(g)
