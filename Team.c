#include<stdio.h>
int main()
{
 // ACCEPTED
    int n,j,arr[3] , i , count , ans = 0;
    scanf("%d\n",&n);
    for( j = 0 ; j< n   ; j++){
            count  = 0;
      for( i = 0 ; i < 3 ; i++){
            scanf("%d",&arr[i]);
            if(arr[i] == 1){
                count++;
                }
        }
        if (count > 1){
            ans++;
        }

    }
   printf("%d",ans);
return 0;
}
