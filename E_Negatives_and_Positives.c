#include<stdio.h>
#include<limits.h>
int main()
{
    long long int t,n,i;
    scanf("%lld", &t);
    while (t--)
    {   
        long long int n , i , j = 0, cnt = 0, sum2 = 0, max = INT_MIN;
        scanf("%lld", &n);
        long long int arr[n];
        for(i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            if(arr[i] < 0)
            {
                int temp =  0 - arr[i];
                sum2 += temp;
                j++;
            }
            // minus ashle alada kore positive kore rakhbo, then even numbers minus paile duita milee positive korbo
            // jodi odd number minus thakhe tahole odd er moddhe jetaar maan beshi minimum oita k positive korbo ar positive theke min k minus korbo
            
        }

    }
   return 0;
}
