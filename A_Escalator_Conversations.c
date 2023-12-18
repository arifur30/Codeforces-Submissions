#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int t, n, m, k, H, cnt;
    scanf("%d", &t);
    while (t--)
    {
        cnt = 0;
        scanf("%d %d %d %d", &n, &m, &k,&H);
        double ans ;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
            ans = abs(H-arr[i])/(k*1.0);
            if(ans == (int)ans)
            {
                if((int)ans < m && (int)ans != 0)
                    cnt++;
            }
                
            
        }
            
        printf("%d\n", cnt);
    }
    
    return 0;
}
