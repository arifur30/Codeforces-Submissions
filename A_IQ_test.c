#include<stdio.h>
int main()
{           //accepted
    int n , i, index_0,index_1, ara[2]= {0};
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] %2 == 0)
        {
            ara[0]++;
            index_0 = i;
        }
        else
        {
            ara[1]++;
            index_1 = i;
        }
    }
    (ara[0] == 1)? printf("%d\n",index_0+1):printf("%d\n", index_1+1);   
    return 0;
}