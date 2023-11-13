k = int(input())
vps = []

for _ in range(k):
    a = str(input())
    vps.append(a)

for v in vps:
    c = []
    for j in v:
        if j == "(":
            c.append("(")
        elif j == ")":
            if len(c) != 0:
                c.pop()
            else:
                c.append("NO")
                break  
    if len(c) == 0:
        print("YES")
    else:
        print("NO")
