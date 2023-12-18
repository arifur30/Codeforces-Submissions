#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n , m, i, j = 0,z=0, max = 3, min = 1001;
    scanf("%d %d", &n, &m);
    int sub[m-n+1] , arr[m];
    for(i=0;i<m;i++)
    {
        
        scanf("%d", &arr[i]);
        if(j<n)
        {
            if(arr[i] > max)
                max = arr[i];
                
            if(arr[i] < min)
                min = arr[i];
                printf("min %d\n", min);
        j++;
        }
        else if(j==n-1)
        {
            sub[z] = max - min;
            max = 3;
            min = 1001;
            z++;
            j = 0;
        }
    }
    min = 1001;
    for(i = 0; i <= m-n;i++)
    {
        //if(sub[i] < min)
        //    min = sub[i];
        printf("%d\n", sub[i]);
    }
   // printf("%d\n", min);
    return 0;
}
