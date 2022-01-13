while(1):  
    arr=input().split(" ")  
    arr.reverse()  
    l = len(arr)  
    for i in range(l-1):  
        print(arr[i],end=" ")  
    print(arr[l-1])  
