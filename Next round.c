#include<stdio.h>
int main()
{                                                                                                           //  ACCEPTED
    int n , k , arr[ 1002] , i , num,j, count = 0;
    scanf("%d %d", &n , &k );
    for( i = 0 ; i < n ; i++){
            scanf("%d", &arr[i]);
    }
     num = arr[k-1];
     for( j = 0 ; j< n ; j++){
        if( arr[j] >= num){
            if(arr[j] > 0){
                count++;
            }
        }
     }
     printf("%d", count);
return 0;
}


