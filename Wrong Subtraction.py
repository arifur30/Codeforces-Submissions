num_str,k = input().split()
k = int(k)
num = int(num_str)
for i in range(k):
    if num % 10 == 0 :
        num = num / 10
    else:
        num -= 1
print(str(int(num)))