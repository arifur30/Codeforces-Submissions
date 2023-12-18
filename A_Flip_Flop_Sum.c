#include<stdio.h>
int main()
{
    long long int t,n,i;
    scanf("%lld", &t);
    while (t--)
    {   //accepted
        long long int sum = 0, cnt = 0, temp = 1;
        scanf("%lld" ,&n);
        long long int arr[n];
        for(i = 0; i < n; i++)
        {
            scanf("%lld" , &arr[i]);        // like kira like arif
            sum += arr[i];
            if(arr[i] == -1)
                temp = 0;
        }
        //printf("sum %d\n", sum);
        if(n ==2 )
        {
            arr[0] = 0 - arr[0];
            arr[1] = 0  - arr[1];
            printf("%lld\n" , arr[0] + arr[1]);
        }
        else{
            for( i = 0; i< n-1 ; i++)
            {
                if(arr[i]== -1 && arr[i+1] == -1 && cnt == 0)
                {
                    sum += 4;
                    cnt = 1;
                }

            }
            if(temp == 1)
                sum -= 4;
            printf("%lld\n",sum);
        }

    }
   return 0;
}
