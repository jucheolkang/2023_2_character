T = int(input())
c = []

for i in range(T):
    a, b = input().split()
    a = int(a)
    result = []
    
    for j in b:
        d = j * a
        result.append(d)
    
    c.append(result)

for k in range(T):
    for l in c[k]:
        print(l, end="")
    print()
