#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int t, l ;

    scanf("%d\n", &t);
    while (t--)
    {
        scanf("%d\n" , &l);
        int cnt = 0, j;
        char s[l];
        gets(s);
        for(int i = 1 ; i<l; i++ )
        {
            if(s[i-1] > s[i])
            {
                for(int x = s[i-1], j= i; j<l; j++)
                {
                    if(s[j]< x)
                        {
                            cnt++;
                            if(cnt >= l-1)
                            {
                                cnt = l - 1;
                            }
                        }
                    else break;
                }
            }

        }
        if(cnt != 0)
            printf("%d\n", cnt+1);
        else
            printf("0\n");
    }
    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                                                                                                                                      | | |          |||


*/

