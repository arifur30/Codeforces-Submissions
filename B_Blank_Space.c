#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, t, i;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int arr[n] , cnt = 0, temp = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i] == 0)
                temp++;
            else
            {
                if(temp > cnt)
                    cnt =temp;
                temp = 0;
            }
        }
        if(temp>cnt)
            cnt = temp;
        
        printf("%d\n", cnt);
    }
    
    return 0;
}
