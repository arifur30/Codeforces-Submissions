#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
//      Accepted
int main(int argc, char const *argv[])
{
    int t , arr[3], i;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        qsort(arr, 3, sizeof(int), cmpfunc);
        printf("%d\n", arr[1]);
    }

    
    return 0;
}
