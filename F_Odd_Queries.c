#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        unsigned long long n , q, l , r, k, sum = 0, i, demo;
        scanf("%llu %llu", &n, &q);
        unsigned long long arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%llu", &arr[i]);
            sum += arr[i];
        }
        demo = sum;
        for(i=0;i<q;i++)
        {
            scanf("%llu %llu %llu", &l ,&r,&k);
            
            for(int x = l-1; x<r;x++)
                demo -= arr[x];
            demo += k*(l-r+1);

            if(demo%2 != 0)
                printf("YES\n");
            else
                printf("NO\n");
            demo = sum;
        }

    }
    
    return 0;
}
