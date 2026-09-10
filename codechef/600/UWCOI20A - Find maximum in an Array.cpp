t=int(input())

for _ in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    
    highest=arr[0]
    for i in range(1,n):
        if arr[i]>highest:
            highest=arr[i]
    print(highest)