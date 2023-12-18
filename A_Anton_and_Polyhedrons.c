#include<stdio.h>
int main(int argc, char const *argv[])
{           //accepted
    int t, i , cnt = 0;
    char s[10001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s" , s);
        if(s[0] == 'T')
            cnt += 4;
        else if(s[0] == 'C')
            cnt += 6;
        else if(s[0] == 'O')
            cnt += 8;
        else if(s[0] == 'D')
            cnt += 12;
        else if(s[0] == 'I')
            cnt += 20;
        
    }
    printf("%d\n", cnt);
    return 0;
}
