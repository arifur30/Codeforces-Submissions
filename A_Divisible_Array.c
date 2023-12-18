#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,i,j; 
        scanf("%d", &n);
        if(n % 2 == 0)
        {
            for(i=2, j =0;j < n;i+=2, j++)
                printf("%d ", i);
            printf("\n");
        }
        else
            {
                for(i = 0 ; i < n; i++)
                    printf("%d ", i+1);
                printf("\n");
            }
        
    }
    
    return 0;
}
