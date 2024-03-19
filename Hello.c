#include<stdio.h>
#include<string.h>

int main()
{
    char str[100] = "Hello World! ";
    char cpy[100] = "String Class - 1";

    for(int i = 0; i < strlen(str); i++)
   {

       if(i % 2 == 0)
            printf("*");
        else
            printf("%c", str[i]);
   }


   printf("\n\n%s", str);
}
