n = int(input())
count = 1
k = 1

while n > 0:
    if n == 1:
        print(count)
        break
    elif n > k:
        k += 6*count
        count += 1
    elif n == k:
        print(count)
        break
    else:
        print(count)
        break


