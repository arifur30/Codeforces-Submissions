#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>            //  ACCEPTED

int main()
{
        int i , j , n , cnt[2] ;
        cnt[0] = 0;
        cnt[1] = 0;
        scanf("%d\n", &n);
        char *games = malloc(n * sizeof(char));
        gets(games);

        for( i = 0 ; i< n ; i++){
                if(games[i] == 'A'){
                    cnt[0]++;
                }
                else{
                    cnt[1]++;
                }
        }

        if(cnt[0] > cnt[1]){
            printf("Anton\n");
        }
        else if(cnt[1] > cnt[0]){
            printf("Danik\n");
        }
        else{
            printf("Friendship\n");
        }
    return 0;
}







/*                                                              This is Arifur Rahman                                                         -----
                                                        Username: Arif.30 (Codeforces)                                           ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

