t= int(input())
num = 0
max = 0
#                   ACCEPTED
for i in range(t):
    a,b = input().split()
    a,b = int(a), int(b)
    num -= a
    num += b
    if num > max :
        max = num

print(max)