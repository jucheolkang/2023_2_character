N = int(input())
b = []
for i in range(N):
    a = int(input())
    b.append(a)
b.sort()

for j in range(N):
    print(b[j], end="\n")
