## 문제 분석

## 문제 풀이


## 답안 코드
```python
while True:
    try:
        n, k = map(int, input().split())
        result = n
        
        while True:
            if n<k:
                break
    
            result += n//k    
            n = (n%k) + (n//k)    
        print(result)
    except:
        break
```

## 느낀점
알고리즘 자체는 쉽게 만들었지만, 정답 인식이 안 되어서 문제였다.  
여러가지로 단일 답도 도출하고, 3번 반복도 했지만 소용이 없었다.  
혹시나 해서 무한 반복을 걸어보니 EOFError가 떴다. 중간에 멈추는 것이 있다는 것을 알고 예외처리를 해서 해결했다.