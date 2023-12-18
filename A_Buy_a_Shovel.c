#include<stdio.h>
int main(int argc, char const *argv[])
{           //      accepted
    int k , r, i = 1;
    scanf("%d %d", &k, &r);
    while(1)
    {
        if((k*i)%10 == r || (k*i)%10 == 0)
        {
            break;
        }
        else
        {
            i++;
        }
    }
    printf("%d\n",i);
    return 0;
}
