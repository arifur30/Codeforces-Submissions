#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t, arr[4] = {0}, i;
    scanf("%d", &t);
    while (t--)
    {
        int max = 0;
        for(i=0;i<4;i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i=1;i<4;i++)
            {
                if(arr[i]>arr[0])
                {
                    max++;
                    continue;
                }
            }
        printf("%d\n", max);
    }
    
    return 0;
}
