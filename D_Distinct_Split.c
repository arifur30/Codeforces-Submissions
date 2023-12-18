#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t, i ,n;
    scanf("%d", &t);
    while (t--)
    {
        /* ekbar shamner theke, arekbar picher theke check kore dekhbo, then decide korbo sum */
    int sum = 0, ch = 0, arr[27] = {0}, ara[27] ={0};
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);
    for(i = 0; i < n; i++)
    {
        int temp = s[i] - 96;
        if(arr[temp]>0)
            {
                ara[temp]++;
                ch = 1;
            }
        else if(ch == 0)
            arr[temp]++;
        else if(ch == 1)
            ara[temp]++;
    }
    for(i = 1; i<27;i++)
    {
        if(ara[i] >0)
            sum++;
        if(arr[i] == 1)
            {
                sum++;
            }
    }
    printf("%d\n", sum);
    }
    
    return 0;
}
