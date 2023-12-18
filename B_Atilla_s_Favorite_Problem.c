#include<stdio.h>
int main(int argc, char const *argv[])          //accepted
{
    int t, temp ,i ;
    char s[1000];
    scanf("%d", &t);
    while (t--)
    {
        int length, max = 0;
        scanf("%d", &length);
        scanf("%s", &s);
        for(i = 0; i < length;i++)
        {
            if((s[i] - 96) > max)
                max = s[i] - 96;
        }
    printf("%d\n", max);
    }
    
    return 0;
}
