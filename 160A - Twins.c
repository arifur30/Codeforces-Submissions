#include<stdio.h>
#include<string.h>
#include<math.h>
//                                      ACCEPTED
int main()
{
    int n , i , j, temp, a[100], p = 0, sum = 0, cnt =0;
    scanf("%d\n", &n);
    for( i = 0; i < n ; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    for(i = 0 ; i < n; i++){
        for(j = i + 1; j < n ; j++){
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    i = n;           // We have to count from bigger values
    while(i--)
    {
        p += a[i];
        sum -= a[i];
        cnt++;
        if(p > sum){break;}
    }

    printf("%d\n", cnt);
return 0;
}
