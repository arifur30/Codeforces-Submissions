s = input()
n = int(s)
flag = False
if n < 0:
    n = len(s)
    if(s[n-1] > s[n-2] and n > 2):
        flag = True
    else:
        c = s[n-1]
        s[n-1] = s[n-2]
        s[n-2] = '\0'
        flag = True

    print(s)