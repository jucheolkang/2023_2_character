while True :
    a = input()
    b = []

    if a == "." :
        break

    for i in a :
        if i == '[' or i == '(' :
            b.append(i)
        elif i == ']' :
            if len(b) != 0 and b[-1] == '[' :
                b.pop()
            else : 
                b.append(']')
                break
        elif i == ')' :
            if len(b) != 0 and b[-1] == '(' :
                b.pop()
            else :
                b.append(')')
                break
    if len(b) == 0 :
        print('yes')
    else :
        print('no')
