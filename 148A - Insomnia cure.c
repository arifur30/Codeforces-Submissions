#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
//                                  ACCEPTED
int main()
{
    int k , l , m, n, d , cnt = 0;
    scanf("%d\n%d\n%d\n%d\n%d", &k , &l, &m, &n, &d);
    if(k == 1)
        cnt = d;
    else
    {
        for(int i = 1; i<=d ; i++)
        {
            if(i%k == 0 || i%l==0 || i%m==0 || i%n == 0)
                cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                                                                                                                                      | | |          |||


*/

