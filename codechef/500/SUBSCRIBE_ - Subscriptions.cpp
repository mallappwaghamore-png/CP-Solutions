# cook your dish here


t=int(input())
while t>0:
    N,X = map(int, input().split())
    
    print(((N+5)//6)*X)

    
    t-=1