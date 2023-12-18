#include<stdio.h>
int main(int argc, char const *argv[])
{   //          accepted
    int a, b, max_h = 0, same =0;
    scanf("%d %d", &a, &b);

    (a>b)?(max_h = b):(max_h =a);
    if(a>b)
    {
        a -= b;
        same = a/2;
    }
    else
    {
        b -= a;
        same = b/2;
    }
    printf("%d %d\n", max_h, same);
    return 0;
}
