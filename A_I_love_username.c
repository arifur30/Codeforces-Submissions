#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* accepted */
    int t, n , max = -1,min = 10001, cnt =0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if(n > max)
        {
            max = n;
            cnt++;
        }
        if(n < min)
        {
            min = n;
            cnt++;
        }
    }

  printf("%d\n", cnt - 2);
    return 0;
}
