# cook your dish here
t=int(input())
while t>0:
    A,B,C=map(int, input().split())
    
    avg=(A+B)/2
    
    if avg>C:
        print("YES")
    else:
        print("No")
    t-=1