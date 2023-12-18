#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//                                  ACCEPTED

int max(int ans, int value)
{
    if(value>ans)
    {
        return value;
    }
    return ans;
}
int main()
{
    int a, b, c ;
    scanf("%d\n%d\n%d", &a ,&b, &c);
    int ans = a + b + c;

    ans = max(ans , (a*b*c));
    ans = max(ans, (a+b)*c );
    ans = max(ans ,a*(b+c) );
    ans = max(ans, a+(b*c));
    printf("%d\n", ans);
    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                                                                                                                                      | | |          |||


*/

