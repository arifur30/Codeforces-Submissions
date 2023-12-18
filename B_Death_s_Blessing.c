#include<stdio.h>
 
 
int main()
{
    int t,n;
    scanf("%d",&t);
 
    while(t--){
        scanf("%d",&n);
        long long int a[n],bs[n],sum=0,max=0;
        for(int i=0;i<n;i++){
            scanf("%lld", &a[i]);
            sum+=a[i];
        }
        for(int i=0;i<n;i++){
            scanf("%lld", &bs[i]);
            sum+=bs[i];
            if(max<bs[i])max=bs[i];
        }
       
 
 
        printf("%lld\n", sum-max);
 
    }
    return 0;
}