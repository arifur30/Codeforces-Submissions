#include<stdio.h>

#include<stdint.h>

int main()
{
    // n = row
    //m = column
   int ara[100][100] ;
   int ara2[100][100] ;
    int i, j,t,n,m,x,nx,mx,temp;
    scanf("%d\n",&t);

        for(i=0;i<t; i++){
            scanf("%d %d %d", &n, &m, &x);
        }

        for(j=1;j<=n;j++){
            for(i=1;i<=m;i++){
                ara[j][i] = i;
                if(ara[j][i] == x){
                   break;
                    nx = j;
                   mx = i;
                }
            }
        }
            for(i=1;i<=n;i++){
                for(j=1;j<=m;j++){
                    ara2[i][j] = j;
                        if( i==nx && j==mx){
                            break;
                            temp = ara2[nx][mx];

                }

            }

        }
        printf("%d",temp);

   return 0;
}
