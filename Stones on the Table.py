t = int(input())
clr = input()
new = ""
move = 0
#                                       ACCEPTED
for i in range(1,t):
    if clr[i-1] == clr[i]:
        move+=1
print(move)