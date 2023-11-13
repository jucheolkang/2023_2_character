A, B, C, D = map(int, input().split())
P, M, N = map(int,input().split())

a = A + B
b = C + D
Pattack = 0
Mattack = 0
Nattack = 0
if P % a <= A and P % a != 0:
    Pattack +=1
if P % b <= C and P % b != 0:
    Pattack +=1

if M % a <= A and M % a != 0:
    Mattack +=1
if M % b <= C and M % b != 0:
    Mattack +=1

if N % a <= A and N % a != 0:
    Nattack +=1
if N % b <= C and N % b != 0:
    Nattack +=1

print(Pattack)
print(Mattack)
print(Nattack)
