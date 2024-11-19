s = input()
s1 = s
f = 0
if "AB" in s:
    s = s.substri
    if "BA" in s:
        f = 1
if(f == 1):
    print("YES")
else:

    if "BA" in s1:
        s1 = s1.replace("BA", "", 1)
        if "AB" in s1:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")