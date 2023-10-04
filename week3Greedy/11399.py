N = int(input())
num_list = list(map(int,input().split(' ')))
sum_num = 0
sum_list = []

num_list.sort()

for i in range(N):
  sum_num += num_list[i]
  sum_list.append(sum_num)
  
print(sum_list)
print(sum(sum_list))