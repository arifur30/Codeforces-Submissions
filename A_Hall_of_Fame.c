#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t, i , j;
    scanf("%d", &t);
    while (t--)
    {
        int n, seq = -1, ans = 0;
        scanf("%d", &n);
        char s[n];
        scanf("%s", &s);
        if(n==2)
        {
            if(s[0] == 'R' && s[1] == 'L')
            {
                printf("0\n");
            }
            else if(s[0] == 'L' && s[1] == 'R')
                printf("1\n");
            else
                printf("-1\n");
        }
        else{
            for(i=0;i<n-1;i++)
        {
            if(s[i] == 'L' && s[i+1] == 'R')
                ans = i+1;
            if(s[i] != s[i+1])
                seq = 1;
        }
            if(seq == 1)
                printf("%d\n",ans);
            else 
            {
                printf("-1\n");
            }
            
        }
        
    }
    
    return 0;
}
