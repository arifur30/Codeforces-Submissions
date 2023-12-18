N1 = "I hate "
N2 = "I love "
#			     ACCEPTED
add_line = "that "
end_line = "it"
def main():
    t = int(input())
    hulk_feeling = ""
    for i in range(1,t+1):
        if i%2 != 0:
            hulk_feeling = hulk_feeling + N1
        else:
            hulk_feeling = hulk_feeling + N2
        if i< t :
            hulk_feeling = hulk_feeling + add_line
        elif i == t:
            hulk_feeling = hulk_feeling + end_line
    print(hulk_feeling)


if __name__ == '__main__':
    main()