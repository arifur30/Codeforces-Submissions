#include<stdio.h>
int main(int argc, char const *argv[])
{//         accepted
    int n , k , i = 1, cnt =0;
    scanf("%d %d", &n, &k);
    k = 240 - k;
    while(k >=0)
    {
        k -= 5*i;
        cnt++;i++;
    }
    cnt--;
    if(cnt > n)
        printf("%d\n",n);
    else
        printf("%d\n", cnt);
    return 0;
}
