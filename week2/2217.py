n = int(input())
b = []

for _ in range(n):
    a = int(input())
    b.append(a)
b.sort(reverse=True)
c = []
for i in range(n):
    c.append(b[i]*(i+1))

k = max(c)

print(k)
