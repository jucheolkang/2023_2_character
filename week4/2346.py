N = int(input())
a = list(map(int, input().split()))
s = 0 # 처음 시작 위치
value = a.pop(s)# 첫 번째 요소 값
while (a):
    if  value > 0: #요소 값이 양수
        s = (s + value-1)%len(a)
    else: # 요소 값 음수
        s = (s + value)%len(a) # 파이썬에서는 % 연산자를 사용하여 음수를 처리할 때 나머지를 계산하면 양수로 반환됨
    value = a.pop(s)
# N=0이면 자동으로 탈출

#삭제까지는 가능 출력을 어떻게 해야 할지...    
