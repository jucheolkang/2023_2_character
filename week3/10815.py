n = int(input())
A = set(map(int, input().split()))
m = int(input())
M = list(map(int, input().split()))

for i in M:
  print(1 if i in A else 0, end=' ')
