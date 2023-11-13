def chicken(n, k, count):
        if n >= k:
            count += n // k
            return chicken(n // k + n % k, k, count)
        return count
try:
    while (True):
        n, k = map(int, input().split())

        count = chicken(n, k, n)
        print(count)
except EOFError:
    exit()
