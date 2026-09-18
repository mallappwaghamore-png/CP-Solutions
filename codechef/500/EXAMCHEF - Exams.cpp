# cook your dish here
t=int(input())
while t>0:
    X,Y,Z=map(int, input().split())
    s=X*Y
    if s>=2*Z:
        print("NO")
    else:
        print("YES")
        
    t-=1