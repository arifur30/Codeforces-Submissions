#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//                                      ACCEPTED
int main()
{

    long long n , k , i ,j;
    scanf("%lld %lld" , &n , &k);
    if( n % 2 == 0){
        j = n /2;
    }
    else{
        j  = (n/2) + 1;
    }
    if(k <= j){
        i = (k * 2) - 1;
    }
    else{
        i = (k - j)*2;
    }
    printf("%lld\n", i);
    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣                                                   -----
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                             ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

