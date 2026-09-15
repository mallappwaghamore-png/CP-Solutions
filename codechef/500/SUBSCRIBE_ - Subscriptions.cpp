# cook your dish here
import math

t=int(input())
while t>0:
    N,X = map(int, input().split())
    
    m=math.ceil(N/6)
    
    print(m*X)
    
    
    
    t-=1