#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
//                                  ACCEPTED
int main()
{
    int n, q ;
    scanf("%d %d\n", &n , &q);
    char s[n];
    scanf("%s\n", &s);
    int ara[n];
    ara[0] = (int)s[0] - 96;
    for(int i = 0; i < n ; i++)
    {
        ara[i+1] = ara[i] + s[i] - 96;
    }
    while (q--)
    {
        int a,b;
        scanf("%d %d", &a ,&b);
        printf("%d\n", ara[b] - ara[a-1]);
    }
    return 0;
}

