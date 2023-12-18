#include<stdio.h>
#include<stdlib.h>
//                  accepted
int cmpfunc(const void *a, const void *b)
{
    return(*(int*)a - *(int*)b);
}

int main(int argc, char const *argv[])
{
    int arr[3], i , j;

    for(i=0;i<3;i++)
    {
        scanf("%d", &arr[i]);
        
    }
    qsort(arr, 3, sizeof(int), cmpfunc);
    printf("%d\n", arr[2]-arr[0]);

    return 0;
}
