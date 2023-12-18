#include<stdio.h>
int main()
{
    int t, arr[3],i;
    scanf("%d", &t);
    while (t--)
    {
        int max = 0, sum = 0;
        for(i=0;i<3;i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
            if(arr[i] > max)
                {
                max = arr[i];
                }
        }
        if(max == (sum-max))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}