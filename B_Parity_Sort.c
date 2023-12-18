#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
typedef long long ll;
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n,  max_n = LLONG_MIN, min_n = LLONG_MAX, odds = 0, even = 0, flag = 1;
        scanf("%lld", &n);
        ll arr[n];
        ll first_index = 0, last_index = (n-1);
        for(ll i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            if(i == 0)
                first_index = arr[i];
            else if(i == last_index)
                last_index = arr[i];
            if(arr[i] < min_n)
                min_n = arr[i];
            else if(arr[i] > max_n)
                max_n = arr[i];
            if(arr[i] % 2 == 0)
                even++;
            else if(arr[i]%2 != 0)
                odds++;
        }

            if(min_n % 2 != 0 && first_index % 2 == 0)
               {
                    flag = 0;
               } 
            else if (min_n % 2 == 0 && first_index % 2 != 0)
            {
                flag = 0;
            }
            else if (max_n % 2 == 0 && last_index % 2 != 0)

            {
                flag = 0;
            }
            
            else if (max_n % 2 != 0 && last_index % 2 == 0)
            {
                flag = 0;
            }
        if(flag == 1)
        printf("YES\n");
        else
           printf("NO\n");
    }
    
    return 0;
}
