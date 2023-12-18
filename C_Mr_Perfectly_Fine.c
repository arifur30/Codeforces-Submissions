#include<stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, i;
        scanf("%lld", &n);
        long long int m, min_a1 = INT_MAX, min_a2 = INT_MAX , cnt = 0, ok_1 = 0, ok_2= 0, ans = -1;
        char s[2];

        for(i = 0; i<n;i++)
        {
            scanf("%lld %s", &m, s);
            if(s[0] == '1' && s[1]== '1')
                {
                    if(m<cnt)
                        cnt = m;
                }
            else if(s[0] == '0' && s[1] == '1')
            {
                ok_1 = 1;
                if(m< min_a1)
                    min_a1 = m;
            }
            else if(s[0] == '1' && s[1] == '0')
            {
                ok_2 = 1;
                if (m < min_a2)
                    min_a2 = m;
            }

        }
        if(ok_1 == 1 && ok_2 == 1)
            ans = min_a1 + min_a2;
        if(cnt>0)
        {
            if(ans != -1)
            {
                if(cnt>ans)
                    printf("%lld\n", ans);
                else
                    printf("%lld\n", cnt);
            }
            else
                printf("%lld\n",cnt);
        }
    }
    
    return 0;
}
