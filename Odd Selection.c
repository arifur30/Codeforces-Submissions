#include<stdio.h>
int main()
{                                                                               //          ACCEPTED

    int t,j;
    scanf("%d", &t);
    while(t--){
        int n,x,in, e= 0 , o = 0 , i ;
       scanf("%d %d", &n , &x);
       for(i = 0; i< n ; i++){
        scanf("%d",&in);
        if(in%2 == 0){
            e++;
        }
        else{
            o++;
        }

       }
       if( o== 0 || (e==0 && x%2 ==0 ) || (n==x && o %2 == 0)    ) {
            printf("No\n");
       }
       else{
         printf("Yes\n");
       }


    }
}
