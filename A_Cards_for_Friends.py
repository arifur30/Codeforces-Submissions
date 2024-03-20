t= int(input())

for _ in range(t):
    w,h,n = map(int, input().split())
    cnt = 1
    if n == 1:
        print("YES")
        continue
    while w%2 == 0:
        w //= 2
        cnt *= 2
    while h%2 == 0:
        h //= 2
        cnt *= 2
    if cnt >= n:
        print("YES")
    else:
        print("NO")