#include<stdio.h>

int main()
{
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("\nEnter the operation to be performed:  (+, -, *, /, %%) ");
    char ch;
    scanf(" %c", &ch);
    if(ch == '+')
        printf("\n%d + %d = %d\n", a, b, a+b);
    else if(ch == '-')
        printf("\n%d - %d = %d\n", a, b, a-b);
    else if(ch == '*')
        printf("\n%d * %d = %d\n", a, b, a*b);
    else if(ch == '/')
        printf("\n%d / %d = %d\n", a, b, a/b);
    else if(ch == '%')
        printf("\n%d %% %d = %d\n", a, b, a%b);
    else
        printf("\nInvalid operation\n");
    return 0;
}
