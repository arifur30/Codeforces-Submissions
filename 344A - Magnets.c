#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>    //  ACCEPTED

int main()
{
    int n , new_in, old_in, cnt = 1;
    scanf("%d\n", &n);
    scanf("%d\n", &old_in);
    for( int i = 1; i < n ; i++)
    {
        scanf("%d", &new_in);
        if(new_in != old_in){
            cnt++;
            old_in = new_in;
        }
    }
    printf("%d\n",cnt);
    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣                                                   -----
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                             ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

