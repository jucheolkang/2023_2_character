# 문제 분석


# 문제 풀이


# 답안 코드

``` Python
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a_sum, b_sum = 0, 0
victory = 'D'

for i in range(len(a)):
    if(a[i]>b[i]):
        a_sum += 3
        victory = 'A'
    elif(a[i]==b[i]):
        a_sum += 1
        b_sum += 1
    else:
        b_sum += 3
        victory = 'B'

print(a_sum, b_sum)

if a == b:
    print('D')
elif a_sum==b_sum:
    print(victory)
else:
    print('A' if a_sum>b_sum else 'B')
```
