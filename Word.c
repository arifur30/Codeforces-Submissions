#include<stdio.h>
#include<string.h>
#include<ctype.h>
        //                                                      ACCEPTED
int main()
{
        char s[100] ,c;
        int i , j , cntUp= 0, cntLw= 0 ;
        gets(s);
        for(i = 0 ; i< strlen(s) ; i++){
                if( s[i]>= 65 && s[i]<= 90){
                        cntUp++;
                }
                else if( s[i] >= 97 && s[i] <= 122){
                    cntLw++;
                }

        }
        if(cntLw>=cntUp){
            for(i = 0 ; i< strlen(s) ; i++){

                s[i] = tolower(s[i]);
            }

        }
        else if(cntUp > cntLw){
            for(i = 0 ; i< strlen(s) ; i++){
                s[i] = toupper(s[i]);
                }

//      toupper() is a function in ctype.h library , used to convert lowercase alphabets to uppercase letters.
//      tolower() is a function in ctype.h library , used to convert  uppercase alphabets to lowercase letters
        }


        printf("%s",s);
return 0;
}
