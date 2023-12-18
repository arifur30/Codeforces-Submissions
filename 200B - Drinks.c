#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//                                                      ACCEPTED
int main()
{

    int n , num[100], sum = 0;
    float avg;
    scanf("%d\n", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    avg = sum*1.0 / n*1.0;
    printf("%f", avg);

    return 0;
}








/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣                                                   -----
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                             ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

