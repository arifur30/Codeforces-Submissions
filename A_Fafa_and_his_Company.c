#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,cnt=0;
    scanf("%d", &n);
    for(i = (n/2); i>0;i--)
    {
        if((n-i)%i==0 )
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
