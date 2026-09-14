t = int(input())

while t > 0:
    n = int(input())
    a = list(map(int, input().split()))
    
    m1 = max(a)
    m2 = 0
    
    for x in a:
        if x != m1:
            m2 = max(m2, x)
            
    print(m1 + m2)
    t -= 1