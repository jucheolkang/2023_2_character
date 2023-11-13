t = int(input())
a= []
for _ in range(t):
    c = int(input())
    a.append(c)

for i in a:
    q = i//25
    d = (i%25)//10
    n = ((i%25)%10)//5
    p = ((i%25)%10)%5
    print(q, d, n, p)
