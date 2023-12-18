t = int(input())
#                                                                           ACCEPTED
add1 = "X++"
add2 = "++X"
sub1 = "X--"
sub2 = "--X"
x = 0
for i in range(t):
    command = input()
    if command == add1 or command == add2 :
        x += 1
    if command == sub1 or command == sub2 :
        x = x -1
print(x)
