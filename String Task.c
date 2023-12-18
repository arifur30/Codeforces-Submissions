#include<stdio.h>
#include<string.h>
                                                                                            //      ACCEPTED

int main()
{
    int i;
    char str[100];
    gets(str);
    for(i = 0 ; i<strlen(str) ; i++){
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=97+str[i]-65;
        }
        if( str[i] != 'a'  && str[i]!= 'e' && str[i]!='i'  && str[i]!='y' && str[i]!='o' && str[i]!='u'){
            printf(".%c",str[i]);
        }
    }
return 0;
}
