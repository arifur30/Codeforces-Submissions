#include<stdio.h>

int main()
{
    int t, n,i,j;
    scanf("%d\n",&t);
    for( i = 0; i<t ; i++){
        scanf("%d",&n);
        j= n;
        if(j==2){
            printf("Yes\n");
            }
        while(j%2==0){
            if(j<=2){
                break;
            }
            j= j/2;
            if(j<2){
                printf("No\n");
            }
            if(j==2){
            printf("Yes\n");
                        break;
            }
        }
        if( j%2 != 0){
            printf("No\n");
        }
    }
}
