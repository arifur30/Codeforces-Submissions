#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t,n, i ;
    scanf("%d", &t);
    while(t--)
    {
        int x=0, y=0, cnt = 0;
        scanf("%d", &n);
        char s[51];
        scanf("%s", &s);
        for(i = 0; i < n;i++)
        {
            if(x == 1 && y == 1)
                {
                break;
                }
            else if(s[i] == 'U')
                y++;
            else if(s[i] == 'D')
                y--;
            else if(s[i] == 'R')
                x++;
            else if(s[i] == 'L')
                x--; 
        
        }
        if(x == 1 && y ==1)
            printf("YES\n");
        else
            printf("NO\n");
        
    }

    return 0;
}
