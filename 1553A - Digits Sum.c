#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//                                          ACCEPTED


int main()
{
    long long n , cnt = 0,i;
    int t;
    scanf("%d\n", &t);
    for(i = 0; i< t ; i++)
    {
        scanf("%lld", &n);
        if(n<9)
        {
            cnt = 0;
        }
        else if( n== 9 || n == 10)
        {
            cnt = 1;
        }
        else if(n> 10)
        {
            cnt = n / 10;
            if( n % 10 == 9)
            {
                cnt++;
            }
        }
        printf("%lld\n", cnt);
    }


    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣                                                   -----
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                             ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

