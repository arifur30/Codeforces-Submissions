#include<stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    unsigned long long sum = 0, min = ULLONG_MAX;
    while (t--)
    {
        unsigned long long n ;
        scanf("%llu", &n);
        sum += n;
        if(n<min  && n % 2!= 0)
        {
            min = n;
        }
        
        
    }
    if(sum%2 != 0)
        sum -= min;
    printf("%llu\n", sum);
    return 0;
}
