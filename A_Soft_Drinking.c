#include<stdio.h>
#include<stdlib.h>
//accepted
int cmpf(const void *a, const void *b)
{
    return ( *(int*)a - *(int*)b );
}
int main(int argc, char const *argv[])
{
    int n,k,l,c,d,p,nl,np, i;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int arr[3] = {0};

    // mililitres
    int ml = k*l;
    arr[0] = ml / (n*nl);

    //lime slices
    int lime = c*d;
    arr[1] = lime / n;

    //salt
    arr[2] = p/(np*n);

    qsort(arr,3,sizeof(int),cmpf);
    printf("%d\n",arr[0]);
    return 0;
}
