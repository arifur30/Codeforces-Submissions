#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t, n , cnt =0, temp = 0;
    scanf("%d", &t);
    //          accepted
    while (t--)
    {
        scanf("%d", &n);
        if(n == -1 && temp == 0)
            {cnt++;
            temp = 0;
            }
        else if(n >0)
            temp += n;
        else if(n == -1 && temp - n < 0)
        {
            cnt++;
            temp = 0;
        }
        else if(n == -1 && temp - n >= 0)
        {
            temp += n;
        }
    }
    printf("%d\n", cnt);
    return 0;
}