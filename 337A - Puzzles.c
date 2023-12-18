#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n , m , i , min;
    scanf("%d %d\n", &n , &m);
    int ara[m+1];
    for(i = 0; i < m ; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < m; i++){
        for(int j = 1; j < m; j++){
                if(ara[j]> ara[i])
                {
                    int alt = ara[j];
                    ara[i] = ara[j];
                    ara[j] = alt;
                }
        }
    }
    for(i = 0; i < m ; i++){
            printf("%d\n", ara[i]);
    }
    return 0;
}

