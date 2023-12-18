#include<stdio.h>
#include<string.h>
//                  accepted
int main(int argc, char const *argv[])
{
    int l1, l2, l3, i , j,z ,arr[27] = {0}, pile[27] = {0};
    char s1[101], s2[101], s3[101];
    scanf("%s", &s1);
    scanf("%s", &s2);
    scanf("%s", &s3);
    l1 = strlen(s1);
    l2 = strlen(s2);
    l3 = strlen(s3);
    for (i = 0; i < l1; i++)
    {
        /* code */
        int temp = s1[i] - 64;
        arr[temp]++;
    }
    for (i = 0; i < l2; i++)
    {
        /* code */
        int temp = s2[i] - 64;
        arr[temp]++;
    }
    for (i = 0; i < l3; i++)
    {
        /* code */
        int temp = s3[i] - 64;
        pile[temp]++;
    }
   // printf("%d", arr[1]);
    
   for(i = 1; i < 27; i++)
   {
        if(arr[i] != pile[i])
        {
            printf("NO\n");
            break;
        }
        else
            z = 1;
   }
   //printf("%d %d\n",z,i);
    if(z == 1 && i == 27)
        printf("YES\n");
    return 0;
}
