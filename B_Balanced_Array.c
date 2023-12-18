#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t, i ;
    scanf("%d", &t);
    while (t--)
    {
        int n,sum,j,temp =0 ;
        scanf("%d", &n);
        if(n%4 != 0)
            printf("NO\n");
        else
        {
            sum = n*(n+1);
            printf("YES\n");
            for(i=0,j=1;i<=(n/2);i++,j+=2)
            {
                temp += j;
                printf("%d ", j+1);
            }
            if(temp>sum)
            {
                for(i=0,j=1;i<=(n/2);i++,j+=2)
            {
                if(j == (temp-sum))
                    continue;
                else
                    printf("%d ", j);
            }
            printf("\n");
            }
        } 
        
    }
    
    return 0;
}
