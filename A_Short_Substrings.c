#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t, i,j, l;
    scanf("%d", &t);
    while (t--)
    {
        char s[101], ans[101] = "";
        scanf("%s", &s);
        l = strlen(s);
        ans[0] = s[0];
        for(i=1,j=1;i<l;i+=2,j++)
        {
            ans[j] = s[i];
        }
        printf("%s\n",ans);
    }
    
    return 0;
}
