t = int(input())
#                                      ACCEPTED
num_x= 0
num_y = 0
num_z =0
for i in range(t):
    x,y,z = input().split()
    x,y,z = int(x),int(y),int(z)
    num_x+=x
    num_y+=y
    num_z+=z
if num_z == 0 and num_y==0 and num_x==0 :
    print("YES")
else:
    print("NO")
