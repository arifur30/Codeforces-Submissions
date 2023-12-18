name = input()
#                                          ACCEPTED
num = len(name)
name = sorted(name)
name = "".join(name)
for i in range(1,len(name)):
    if name[i-1] == name[i]:
        num-=1

if num%2==0 :
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
