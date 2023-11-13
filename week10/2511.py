A = list(map(int, input().split()))
B = list(map(int, input().split()))
a = 0
b = 0
Acount = 0
Bcount = 0
c = []

for i in range(0, 10):
    a = A[i]
    b = B[i]
    if a > b:
        Acount += 3
        c = "A"
    elif a < b:
        Bcount += 3
        c = "B"
    else:
        Acount += 1
        Bcount += 1
    
if Acount > Bcount:
    print(Acount, Bcount)
    print("A")
elif Acount < Bcount:
    print(Acount, Bcount)
    print("B")
else:
    if c == "A":
        print(Acount, Bcount)
        print("A")
    elif c == "B":
        print(Acount, Bcount)
        print("B")
    else:
        print(Acount, Bcount)
        print("D") 
