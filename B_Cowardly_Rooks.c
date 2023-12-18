#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d" , &t);
    while (t--)
    {
       long long int n , m , i;
       scanf("%lld %lld", &n, &m);
       long long int arr1[m] ,arr2[m];
       for(i = 0; i <m ; i++)
       {
            scanf("%lld %lld", &arr1[i] , &arr2[i]);
       }
       if(n - m >= 1)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
    return 0;
}
