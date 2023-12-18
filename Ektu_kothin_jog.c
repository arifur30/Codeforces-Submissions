#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    unsigned long long ans , n;
    scanf("%d", &n);
    if(n % 2 == 0)
    {
        ans = (n/2);
        ans *= (n+1);
    }
    else
    {
        ans = (n+1)/2 ;
        ans *= n;
    }
    printf("%llu\n", ans);

    return 0;
}

