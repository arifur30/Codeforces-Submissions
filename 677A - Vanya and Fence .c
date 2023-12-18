#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>    //  ACCEPTED

int main()
{
    int n , h ,cnt = 0;
    scanf("%d %d\n", &n , &h);
    int *ara = (int*)malloc(n * sizeof(int));
    for(int i = 0 ; i< n ; i++)
    {
            scanf("%d", &ara[i]);
            if(ara[i] > h)
            {
                cnt++;
            }
    }
    printf("%d\n",(cnt * 2) + (n - cnt));

    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣                                                   -----
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                             ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

