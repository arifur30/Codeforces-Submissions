#include<stdio.h>
#include<string.h>

int main()
{
    char p[100] ;
    int num , i , j, l;
    gets(p);
    l = strlen(p);                      //          ACCEPTED
    for( i = 0 ; i< l; i++){
            /* ASCII CODES:
                H = 72
                Q = 81
                "9" =  57
            */
        if( p[i] == 72 || p[i] == 81 || p[i] == 57 ){
            printf("YES");
            break;

        }
        else{
            if( i == l - 1){
                printf("NO");
            }
        }
    }
return 0;
}
