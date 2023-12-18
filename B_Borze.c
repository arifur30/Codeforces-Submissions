#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
//              accepted
{
    int t, i,j =0, length;
    char s[1001], ans[1001] = "";
    scanf("%s", &s);
    length = strlen(s);
    for(i = 0 ; i < length;)
    {
        if(s[i] == '.')
        {
            ans[j++] = '0';
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '.')
        {
            ans[j++] = '1';
            i += 2;
        }
        else
        {
            ans[j++] = '2';
            i += 2;
        }
    }
    printf("%s\n",ans);
    return 0;
}
