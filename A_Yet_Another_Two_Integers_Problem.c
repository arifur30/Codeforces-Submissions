#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    /* accepted */
    int a, b, i ,t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        int sub = abs(a-b);
        int cnt = 0;
        while(1)
        {
            if( sub == 0)
                break;
            if(sub%10 == 0)
            {
                cnt = sub/10;
                break;
            }
            if(sub/10 > 0)
            {
                int temp = sub /10;
                cnt += temp;
                sub = sub - (sub*temp);
            }
            if(sub< 10)
            {
                cnt++;
                sub = 0;
                break;
            }
        }
        
    printf("%d\n", cnt);
    }
    
    return 0;
}
