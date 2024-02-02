#include<stdio.h>

int main ()
{
    // input output
    int arr1[16];
    for(int i = 0; i < 16; i++)
        scanf("%d", &arr1[i]);

    printf("\nThe array elements are: ");

    for(int i = 0; i<16; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}



