#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return ( *(int*)a - *(int*)b);
}
//              accepted
int main(int argc, char const *argv[])
{
    int n , k , i,cnt = 0,seq = 0;
    scanf("%d %d", &n, &k);

    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    
    qsort(arr,n,sizeof(int),cmpfunc);
    for(i=0;i<n;i++)
    {
        int temp = 0;
        if((5-arr[i])>=k)
        {
            seq++;
        }
        if(seq == 3)
        {
            seq =0;
            cnt++;
        }
        if((5-arr[i])<k)
            break;
    }

    printf("%d\n",cnt);
    return 0;
}
