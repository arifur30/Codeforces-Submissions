#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        unsigned long long n,i;
        scanf("%llu", &n);
        long long int a, max = 0,temp;
        for(i=1;i<=n;i++)
        {
            scanf("%lld", &a);
            if((a-i) > max)
                max = (a-i);
            
    
        }
        printf("%lld\n", max);
    }
    return 0;
}
