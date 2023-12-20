#include<stdio.h>
int main ()
{
int n;
    scanf("%d", &n);

    int i, j, sum = 0;
    for(i=1,j=2 ; i <= n; i++, j++)
    {
        sum = sum + (i*i*j);
    }
    printf("sum: %d", sum);
    return 0;
}
