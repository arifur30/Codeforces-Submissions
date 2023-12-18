#include<stdio.h>
#include<stdlib.h>
//          accepted
int cmpfunc(const void *x, const void *y)
{
    return ( *(int*)x - *(int*)y );
}
int main(int argc, char const *argv[])
{
    int t, n, i ;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int arr[n], temp = 1;
        for(i=0;i<n;i++)
            scanf("%d", &arr[i]);

        qsort(arr, n, sizeof(int), cmpfunc);
        for(i= 0; i <n-1; i++)
        {
            if((arr[i+1]-arr[i]) > 1)
                temp = 0;
        }
    if(temp == 1)
        printf("YES\n");
    else
        printf("NO\n");
    }
    
    return 0;
}
