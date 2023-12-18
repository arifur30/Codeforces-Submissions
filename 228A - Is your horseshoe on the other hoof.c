#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//                                      ACCEPTED
int main()
{
    int cnt = 0, a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a==b || a==c || a==d) cnt++;
    if(b==c || b==d) cnt++;
    if(c==d)
        cnt++;
    printf("%d\n", cnt);
    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                                                                                                                                      | | |          |||


*/

