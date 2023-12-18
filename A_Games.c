#include<stdio.h>
int main(int argc, char const *argv[])
{       // accepted
    int n , i , j, x, y, cnt = 0;
    scanf("%d", &n);
    n = n*2;
    int arr[n];
    for(i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    for( i = 0, j = 1; i<n-3 , j<n-2; i+=2 , j += 2 )
    {
        for(x = i+3 , y = i+2; x<n,y<n-1; x +=2, y += 2)
        {
            if(arr[i] == arr[x] && arr[j] == arr[y])
                cnt += 2;
            else if(arr[i] == arr[x] || arr[j] == arr[y])
                cnt++;
        }
    
    }
    printf("%d\n", cnt);
    return 0;
}
