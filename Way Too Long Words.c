#include<stdio.h>
#include<string.h>
int main()
{

    //                                      ACCEPTED
    char str[1002];
    int t,l ;
    scanf("%d",&t);
    while(t--){
        scanf("%s", str);
        l = strlen(str);
        if( l <=10){
            printf("%s\n", str);
        }
        else{
            printf("%c%d%c\n", str[0] , l-2 ,str[l -1 ]);
        }
    }
}
