#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
//                              ACCEPTED
int main()
{
    int t , n , s;
    scanf("%d\n", &t);
    while (t--)
    {
        scanf("%d", &n);
        int up = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &s);
            if(s==1 || s==3)
                up++;
        }
    printf("%d\n", up);
    }


    return 0;
}
