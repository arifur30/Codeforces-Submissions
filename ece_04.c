#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int digits[n], str_n;
        char moves[20];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&digits[i]);
            //
        }
        for(int i=0; i<n; i++)
        {
            scanf("%d %s",&str_n, &moves);
            for(int j=0; j<str_n; j++)
            {
                if(moves[j] =='D')
                {
                    if( digits[i] == 9)
                        digits[i] = 0;
                    else
                     digits[i]++;
                }
                else if(moves[j] == 'U')
                {
                    if(digits[i] == 0)
                        digits[i] = 9;
                    else
                        digits[i]--;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            printf("%d ",digits[i]);
        }
        printf("\n");
    }
}