import math
x= int(input())
#                           ACCEPTED
num = 0


while x > 5 :
    num = math.floor(x/5)
    x = x - (num*5)

if x<=5 and x>=1 :
    num +=1
print(num)