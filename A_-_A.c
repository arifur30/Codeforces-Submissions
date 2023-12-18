#include<stdio.h>
#include<string.h>
 
int main()
{
    int t ;
    char c;
    scanf("%d ", &t);
    while(t--)
    {
        scanf("%c ", &c);
        //printf("%c\n", c);
        if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 'e' || c == 's')
           { printf("YES\n");
            continue;}
        else
            printf("NO\n");
    }
    return 0;
}