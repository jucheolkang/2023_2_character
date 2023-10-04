a = int(input())
A = list(map(int, input().split()))
b = int(input())
B = list(map(int, input().split()))
card1 = set(A)
result= []
for i in B:
    if i in card1:
        result.append(1)
    else:
        result.append(0)
print(" ".join(map(str, result)))
