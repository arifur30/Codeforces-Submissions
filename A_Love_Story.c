#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, l,i;
    char s[11], s2[] = "codeforces";
    scanf("%d", &n);
    while (n--)
    {
        int cnt = 0;
        scanf("%s", s);
        for(i =0;i<10;i++)
        {
            if(s[i] != s2[i])
                cnt++;
        }
        printf("%d\n", cnt);
    }
    
    return 0;
}
