#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//                                      ACCEPTED
int main()
{
    long long int n ;
    scanf("%lld\n", &n);
    int *ara = (int*)malloc(n * sizeof(int));

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &ara[i]);
    }

    int cnt = 1 , maxx = 1;
    for(int j = 1 ; j< n ; j++)
    {
        if( ara[j] >= ara[j - 1] )
        {
                cnt++;
        }
        else
        {
            if(cnt >= maxx)
            {
                maxx = cnt;
            }
            cnt = 1;
        }

        if(cnt >= maxx)
        {
            maxx = cnt;
        }
    }

    printf("%d\n", maxx);
    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣                                                   -----
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                             ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

