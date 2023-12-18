#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//                                      ACCEPTED
int main()
{
    int n , a ,i, p;
    int count[101] = {0};
    scanf("%d", &n);
    for(int j = 0; j < 2; j++)
    {
        scanf("%d", &a);
        for(i = 0; i < a; i++)
        {
            scanf("%d",&p);
            count[p]++;
        }
    }
    for(i = 1; i<=n; i++)
    {
        if(count[i] == 0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}







/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                                                                                                                                      | | |          |||


*/

