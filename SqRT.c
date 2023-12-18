#include<stdio.h>
#include<math.h>
int main()
{
                                                                                                        // ACCEPTED
    int t, n, i ;
    double ans;
    scanf("%d\n", &t);
    while(t--){

        scanf("%d", &n);
        ans = sqrt(n);
        printf("%.0lf\n", floor(ans));
    }
}
