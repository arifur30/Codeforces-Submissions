#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p,m,c,k,r,v,max=0;
    scanf("%d %d %d",&p,&m,&c);
    scanf("%d %d %d",&k,&r,&v);
    
    ((p/k)>max)?(max=(p/k)):(max=max);
    ((m/r)<max)?(max=(m/r)):(max=max);
    ((c/v)<max)?(max=(c/v)):(max=max);

    printf("%d\n", max);
    return 0;
}
