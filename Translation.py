#                       ACCEPTED


def str_rev(x):
    return x[::-1]


def main():
    s = input()
    t = input()
    if len(s) != len(t):
        print("NO")
    else:
        t = str_rev(t)
        if s == t:
            print("YES")
        else:
            print("NO")
if __name__ == '__main__':
    main()