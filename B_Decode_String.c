#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int t, i ;
    scanf("%d", &t);
    while (t--)
    {
        int l;
        char s[51];
        scanf("%d", &l);
        scanf("%s", s);
        for(i=0;i<l-2;i++)
        {
            if( s[i+2] != '0')
            {
                printf("%c",s[i]+48);
            }
            else
            {
                int temp = (s[i]-48)*10  + (s[i+1]-48);
                printf("%c", temp+96);
                i++;
            }
        }
    printf("\n");
    }
    
    return 0;
}
