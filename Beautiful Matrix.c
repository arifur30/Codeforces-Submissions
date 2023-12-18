#include<stdio.h>
#include<string.h>
#include<math.h>                                                            //  ACCEPTED

int main()
{
            int ar[5][5] , i , j , x, y, move = 0;
            for(i = 0 ; i < 5 ; i++){
                for(j= 0 ; j< 5 ; j++){
                    scanf("%d", &ar[i][j] );
                    if(ar[i][j] ==1){
                        x = i+1;
                        y = j+1;
                    }
                }
            }
            if( x < 3 || x>3){
                    move = move +  abs(3-x);
            }
            if( y< 3 || y> 3){
                move = move+ abs(3-y);
            }
        printf("%d",move);
return 0;
}
