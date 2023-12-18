#include<stdio.h>
int main(int argc, char const *argv[])
{// accepted
    int i , arr[4], j, max = 0;
    for(i=0;i<4;i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>max)
            max = arr[i];
    }
    for(i = 0; i < 4; i++)
    {
        j = max - arr[i];
        if(j > 0)
            printf("%d ", j);

    }
    printf("\n");
    return 0;
}
