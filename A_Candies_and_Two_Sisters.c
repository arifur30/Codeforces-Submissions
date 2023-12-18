#include<stdio.h>
typedef long long lli;
int main(int argc, char const *argv[])
{
    /* ACCEPTED*/
    lli t, i, n, ans;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &n);
        if(n <=2)
            {printf("0\n");
            continue;}
        else if(n>2 && n%2 == 0)
        {
            ans = (n/2)-1;
        }
        else if(n>2 && n%2 != 0)
        {
            ans = n/2;
        }
        printf("%lld\n",ans);
    }
    
    return 0;
}
