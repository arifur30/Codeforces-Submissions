str_1 = input()
num1_together = 0
num2_together = 0
#                                                  ACCEPTED
for i in range(len(str_1)):
    if str_1[i] == '1':
        num1_together += 1
        if num1_together>= 7:
            print("YES")
            break
    else:
        num1_together = 0
    if str_1[i] =='0':
        num2_together += 1
        if num2_together>=7:
            print("YES")
            break
    else:
        num2_together = 0

if num2_together< 7 and num1_together <7:
    print("NO")