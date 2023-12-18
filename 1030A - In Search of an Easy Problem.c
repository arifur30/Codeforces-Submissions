#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//                                                  ACCEPTED
int main()
{

    int n;
    scanf("%d\n", &n);
    int *ara = (int*)malloc(n * sizeof(int));
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &ara[i]);
        if(ara[i] == 1){
            printf("HARD\n");
            break;
        }
        else if(i == n-1){
            printf("EASY\n");
        }
    }



    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣                                                   -----
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                             ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

