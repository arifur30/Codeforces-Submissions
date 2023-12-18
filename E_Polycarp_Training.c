#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return(*(int*)a - *(int*)b);
}

int main()
{
    long long int n, i,j, cnt = 0;
    scanf("%lld", &n);
    long long int arr[n];
    for(i=0;i<n;i++)
        scanf("%lld", &arr[i]);
    qsort(arr,n,sizeof(long long int), cmpfunc);
    for(i=0,j=1;i<n;i++)
    {
        if(arr[i]>=j)
        {
            cnt++;
            j++;
        }
    }
    printf("%lld\n", cnt);
    return 0;
}
