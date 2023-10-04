while True:
    n = int(input())
    if n == -1:
        break
    
    b = []
    for i in range(1, n):
        if n % i == 0:
            b.append(i)

    c = sum(b)
    d = " + ".join(map(str, b))
    if n == c:
        print(n, "=", d)
    else:
        print(n, "is NOT perfect.")
