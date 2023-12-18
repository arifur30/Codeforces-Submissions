#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//                                      ACCEPTED
int main()
{
    int n,a, cnt[101];
    memset(cnt, 0, sizeof(cnt));
    scanf("%d\n", &n);
    for ( int i = 0; i < n ; i++)

    {
        scanf("%d", &a);
        cnt[a]++;
    }
    for(int i = 0; i<101; i++)
   {
       while(cnt[i]--)
       {printf("%d ", i);}
   }
    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                                                                                                                                      | | |          |||


*/

