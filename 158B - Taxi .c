#include<stdio.h>
#include<math.h>

int main()
{
    int n , grp , i, j , cnt[5] = {0}, temp, taxi = 0;

    scanf("%d", &n);
    while(n--)
        {
            scanf("%d",&grp);
            cnt[grp] += 1;

        }
        taxi += cnt[4] + cnt[3] + cnt[2] /2 ;
        cnt[1] -= cnt[3];


        if(cnt[2] %2 ==1){
            taxi += 1;
            cnt[1] -= 2;

        }

        if(cnt[1]>0){
            taxi += (cnt[1] +3 )/ 4;
        }

        printf("%d",taxi);

        return 0;
}
