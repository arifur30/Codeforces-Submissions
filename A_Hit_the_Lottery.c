#include<stdio.h>
long long int count(long long int money)        //accepted
{
    long long int cnt = 0;
    
    while(money>0)
    {
        if(money >=100)
    {
        cnt = money/ 100;
        money = money%100;
    }
    
    if(money>=20)
    {
        cnt += money/20;
        money = money%20;
    }
    if(money>=10)
    {
        cnt += money/10;
        money = money%10;
    }
    if(money>=5)
    {
        cnt += money/5;
        money = money%5;
    }
    if(money>=1)
    {
        cnt += money;
        money = 0;
    }
    }
    
    if(money == 0)
        return cnt;
}


int main(int argc, char const *argv[])
{
    long long int  n, i=0;
    scanf("%lld", &n);
    i = count(n);
    printf("%lld\n", i);
    return 0;
}
