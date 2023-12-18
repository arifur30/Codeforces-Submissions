#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//                                  ACCEPTED
int main()
{
    int t , i , j;

    scanf("%d\n", &t);
    while(t--)
    {
        int ara[26] ,ans;
        for(i = 0; i<26; i++){ara[i]=0;}
        char s[50];
        gets(s);
        int len = strlen(s);
        ans = len;
        for(i = 0; i<len; i++){
            ara[s[i] - 'a']++;
            if(ara[s[i] - 'a' ]> 2)
            {
                ans--;
            }
        }
        printf("%d\n", ans/2);
    }
    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣                                                   -----
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                             ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

