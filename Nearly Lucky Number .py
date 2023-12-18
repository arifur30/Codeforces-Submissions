#                               ACCEPTED

def main():
    num_str = input()
    num = 0
    for i in range(len(num_str)):
        if num_str[i] == '4' or num_str[i] == '7':
            num+= 1

        else:
            continue
    number = str(num)
    for i in range(len(number)):
        if number[i] != '4' and number[i] != '7':
            print("NO")
            break
        else:
            if i == len(number) - 1:
                print("YES")


if __name__ == '__main__':
    main()