n, M = map(int, input().split())
a = int(input())
b = M
m=1
sum = 0
for _ in range(a):
    j = int(input())
    if m <= j <= b:
        continue
    elif b < j:
        sum += (j-b)
        b += (j-b)
        m = j - (M -1 )
    elif m > j:
        sum += (m-j)
        m -= (m-j)
        b = j + (M - 1)
print (sum)
