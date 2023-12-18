#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    /*Accepted */
    int t, n , m, i,j,temp = 0 ;
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++)
    {
        if(i%2 != 0)
        {
            for(j=1;j<=m;j++)
             {  
            printf("#");
            if(j==m)
            printf("\n");
            }
        }
        else{
            if(temp == 0)
            {
                for(j=1;j<m;j++)
                    printf(".");
                printf("#\n");
                temp++;
            }
            else{
                printf("#");
                temp = 0;
                for(j=1;j<m;j++)
                {
                    printf(".");
                    if(j == m-1)
                        printf("\n");
                }
            }
        }

    }
    return 0;
}
