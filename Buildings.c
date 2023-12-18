#include<stdio.h>
int main()
{

    int n[1002] , i =0 , j = 1, N, l;
    scanf("%d", &N);
    while(N--){

        scanf("%d", &n[i ]);

        i++;
    }
    l = i;
    for( i = 0 ; i < l ; i++){
        if( n[ i ] >= n[i+1]){
            n[i+1] = n[i+1] - 1;
            if(n[i+1]> 0){
                j++;
            }
            if( n[i+1]>n[i+2]){
                n[i+1] = n[i+1] - n[i+2];
                if( n[i+1] > 0){
                    j++;
                }
                if(n[i+1] < n[i] && n[i+1] < n[i+2]){

                }
            }

        }
    }
printf("%d", j);
}
