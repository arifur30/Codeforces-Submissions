t = int(input())

for i in range(t):
    n = input()
    sum = 0
    for j in range(3):
        sum += int(n[j])
    sum2 = 0
    for j in range(3, 6):
        sum2 += int(n[j])
    if sum == sum2:
        print("YES")
    else:
        print("NO")
        