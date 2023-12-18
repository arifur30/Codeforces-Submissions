a,b = input().split()
a,b= int(a), int(b)
num = 1
#                   ACCEPTED
if a == b :
    print(num)
else:
    for i in range(1,20):
        a = 3*a
        b = 2*b
        if a>b :
            print(i)
            break