#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
//                                          ACCEPTED
int main()
{
    char word[100];
    gets(word);
    int temp ,i, l;
    l = strlen(word);
    for(int i = 1; i < l ; i++)
    {
        if(isupper(word[i]) == 0)
        {
            temp = 0;
            printf("%s\n", word); break;
        }
        else{temp = 1;}
    }


    if(temp == 1)
    {
        for(i = 0; i < l ; i++)
        {
            if(word[i]>=65&&word[i]<=90)
            word[i]=97+word[i]-65;
            else if(word[i]>=97&&word[i]<=122)
            word[i]=65+word[i]-97;
        }
        printf("%s\n", word);
    }
    return 0;
}




/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣                                                   -----
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                             ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

