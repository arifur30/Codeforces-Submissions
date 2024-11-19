

t = int(input())

for _ in range(t):
    n = int(input())
    even = 0
    odd = 0
    f = 0
    l = list(map(int, input().split()))
    for temp in l: 
        if temp % 2 == 0:
            even += temp
        else:
            odd += temp

    if even>odd:
        print("YES")
    else:
        print("NO") 
            
        