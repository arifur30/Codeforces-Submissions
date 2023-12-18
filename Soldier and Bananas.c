#include<stdio.h>
int main()
{                                                   //                  ACCEPTED
    int cost = 0,null = 0,k,n,w, i;
    scanf("%d %d %d", &k,&n,&w);
    for(i=1; i<w+1; i++){
            cost = cost + (i*k);
    }
    if(cost >= n){
        printf("%d",cost-n);
    }
    else{
        printf("%d",null);
    }
}
