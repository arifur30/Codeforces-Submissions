#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>        //  ACCEPTED

int digits(int n)
{
    int a, b ,c,d ;
    a = n%10;
    b = (n / 10) % 10;
    c = (n / 100) % 10;
    d = (n / 1000) % 10;

    if( a != b && a != c && a!= d && b != c && b != d && c != d ){
            return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int y , i , j;
    scanf("%d", &y);
    for( i = y + 1 ; i <= 9012 ; i++){
        //  Max input is 9000, so for max input the answer will be 9012
        if( digits(i) == 1){
            printf("%d\n", i);
            break;
        }
    }


    return 0;
}







/*                                                              This is Arifur Rahman                                                         -----
                                                        Username: Arif.30 (Codeforces)                                           ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

