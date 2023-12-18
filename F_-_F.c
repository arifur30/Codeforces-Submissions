#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t , n , i,j;
    char s[2001];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int length = n;
        int l = n /2;
        scanf("%s", &s);
        for(i =0, j = n-1; j>l, i<=l ; i++, j--)
        {
            if(s[i] == '0' && s[j] == '1')
            {
                length -= 2;
            }
            else if(s[i] == '1' && s[j] == '0')
            {
                length -= 2;
            }
            else
            {
                break;
            }
        }
        if(length<=0)
            printf("0\n");
        else
            printf("%d\n", length);
    }
    
    return 0;
}