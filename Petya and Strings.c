#include<stdio.h>
#include<string.h>
int main()                                                                      //      ACCEPTED
{
     int i , j,l , l2;
    char ch[100] , ch2[100];
    gets(ch);
    gets(ch2);
    for(i = 0 ; i < strlen(ch) ; i++){
            if(ch[i]>=65&&ch[i]<=90)
        {

            ch[i]=97+ch[i]-65;
        }
            if(ch2[i]>=65&&ch2[i]<=90)
        {

            ch2[i]=97+ch2[i]-65;
        }

    }

    j = strcmp(ch,ch2);
    printf("%d", j);

return 0;
}
