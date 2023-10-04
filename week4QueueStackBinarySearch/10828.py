import sys
n = int(input())
list1= []
for _ in range(n):
    A = list(map(str,sys.stdin.readline().split()))
    if A[0] == 'push':
        list1.append(int(A[1]))
    elif A[0] == 'top':
        if len(list1) == 0:
            print(-1)
        else:
            print(list1[-1])
    elif A[0] == "size":
        print(len(list1))
    elif A[0] == "empty":
        if len(list1) == 0:
            print(1)
        else:
            print(0)
    elif A[0] == "pop":
        if len(list1) == 0:
            print(-1)
        else:
            print(list1.pop())