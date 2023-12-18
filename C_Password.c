#include<stdio.h>

int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n-1);
}
int combination(int n, int r)
{
    int ans = factorial(r) * factorial(n-r);
    return factorial(n) / ans;
}

int main(int argc, char const *argv[])
{
    int t, i;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int  arr[n];
        for(i=0;i<n;i++)
            scanf("%d", &arr[i]);
        int ans = combination(10-n,2) * 6;
        printf("%d\n", ans);
        
    }
    
    return 0;
}
