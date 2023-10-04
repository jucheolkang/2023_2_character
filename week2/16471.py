N = int(input())
ju = list(map(int, input().split()))
sa = list(map(int, input().split()))
ju.sort(); sa.sort(); 
j = 0
for i in range(N):
  if ju[j] < sa[i]:
    j += 1
if j < (N+1)//2:
  print("NO")
else:
  print("YES")
