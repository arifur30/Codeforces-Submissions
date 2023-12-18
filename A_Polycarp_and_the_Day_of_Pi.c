#include<stdio.h>
#include<string.h>
int main()
{
    int t, i;
    char s[] = "3141592653589793238462643383279";
    scanf("%d", &t);
    
    while (t--)
    {
        char str[31];
        scanf("%s", &str);
        int l = strlen(str);
        int cnt = 0;
        for(i=0;i<l;i++)
        {
            if(s[i] == str[i])
            {
                cnt++;
            }
            else
                break;
        }
        printf("%d\n",cnt);
    }
    
    return 0;
}
