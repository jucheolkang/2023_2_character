k = int(input())
b = []
d = 0
for i in range(k):
    a = int(input())
    if a != 0:
        b.append(a)        
    else:
        b.pop()

d = sum(b)
print(d)
