str_1 = input()
i = 0
#                                       ACCEPTED
new1 = str_1[i]
new1 = new1.capitalize()
for i in range(1,len(str_1)):
    new1 = new1 + str_1[i]
print(new1)