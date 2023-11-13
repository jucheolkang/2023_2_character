A, B, V = map(int, input().split())

x = (V-B)/(A-B)
if x == int(x):
    print(int(x))
else:
    print(int(x) + 1)
  
'''
A, B, V = map(int, input().split())
count = 0
 
while True:
    a = V - A
    count += 1
    if a <= 0:
        print(count)
        break 
    else:
        V = a + B 

'''
