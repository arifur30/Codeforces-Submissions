
#include<stdio.h>

int main ()
{

    int arr[16];
    for(int i = 0; i < 16; i++)
        scanf("%d", &arr[i]);

    // accessing element

    // 10 th index er value change to 100
    printf("10th index element: %d", arr[10]);


    arr[10] = 100;
    printf("10th index element: %d", arr[10]);

    return 0;
}



