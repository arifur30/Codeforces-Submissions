#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t , n;
    scanf("%d", &t);
    unsigned long long a, temp = 1, max = 1;
    while (t--)
    {
        scanf("%d", &n);
        while (n--)
        {
            scanf("%llu", &a);
            if((temp*a)>max)
                max = temp*a;
            temp = a;
            
        }
        printf("%llu\n", max);
        max = 1;
        temp = 1;
        
    }
    
    return 0;
}

        