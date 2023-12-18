#include<stdio.h>
#include<math.h>
int main()
{                                                                                           //      ACCEPTED
    int m,n,num;
    scanf("%d %d",&m,&n);
    if( m==2 && n>=m){
            num = n;
    }
    if(m==1 && n>m){
        num = floor(n/ 2);
    }
    if(n > 2 && n>=m ){
            if( n%2 ==0 ){
                num = (n/2)*m ;
            }
            else{
                        num =  floor(m/2) + (m* floor(n/2) );
            }

    }
     printf("%d",num);
return 0;
}

