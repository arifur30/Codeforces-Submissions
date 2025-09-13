#include <stdio.h>
int main ()
{
    int x,y,d,r;
    float f;
    scanf("%d  %d",&x,&y);
    if (x!=0)
    {
    d=x/y;
    r=x%y;
    f=(float)x/y;
    printf("%d %d %.5f\n",d,r,f);
    }

    return 0;
}
