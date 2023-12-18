#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
         long long int k,  temp;
            scanf("%lld", &k);
            if(k < 4)
                printf("%lld\n",k);
            else
            {
                temp = ceil(k/10.0);
            printf("%lld\n", temp+k);
            }
            
    }
    
   



    return 0;
}
