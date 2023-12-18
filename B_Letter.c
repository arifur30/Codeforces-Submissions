#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s1[201], s2[202];
    gets(s1);
    gets(s2);

    int arr1[58] = {0} , arr2[58] = {0} , i,     check = 0;

    
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i] == ' ')
            continue;
        else
            arr1[s1[i]-65]++;
    }

    for(i=0;i < strlen(s2); i++)
    {
        if(s2[i] == ' ')
            continue;
        else
            arr2[s2[i]-65]++;
    }

    for(i=0;i<58;i++)
    {
        if(arr1[i]>=arr2[i])
            check = 1;
        else
            {
                check = 0 ;
                printf("NO\n");
                break;
            }
    }
    if(check == 1)
        printf("YES\n");
    return 0;
}
