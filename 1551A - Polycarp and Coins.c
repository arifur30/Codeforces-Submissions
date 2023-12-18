#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//                                      ACCEPTED
int main()
{
    long long t , i , n , c1= 0 ,c2 = 0;
    int sub;
    scanf("%lld\n", &t);
    while(t--)
    {
        scanf("%lld" , &n);
        int temp1 = n/3;
        for( i = temp1 ; i <= temp1 + 10 ; i++ )
        {
            if(i + 2*(temp1) == n)
            {
                sub = abs(i - temp1);
                c1 = i;
                c2 = temp1;
            }

        }
        for(i = temp1 - 2; i <=temp1+5 ; i++ )
        {
            if(temp1 + (i*2) == n)
            {
                if(abs(i - temp1) < sub)
                {
                    c1 = temp1;
                    c2 = i;
                }
            }
        }
       printf("%lld %lld\n", c1, c2);
    }

    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣                                                   -----
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                             ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

