#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int a,b,c,ans1,ans2;
        scanf("%lld %lld %lld", &a, &b, &c);

        ans1 = abs(a-1);
        ans2 = abs(b-c) + abs(c-1);
        if(ans1 < ans2)
            printf("1\n");
        else if(ans2==ans1)
            printf("3\n");
        else
            printf("2\n");

    }
    
    return 0;
}
