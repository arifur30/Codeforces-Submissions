
#include<stdio.h>

int main ()
{

    int size;
    printf("How many elements: ");
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    // swap element

    // 2 1 9 0 5
    // swap element of index 1(value = 1) , index 2 (value = 9)
    // 2 9 1 0 5

    int temp;
    temp = arr[1];
    arr[1] = arr[2];
    arr[2] = temp;

    printf("After swap: ");
    for(int i = 0 ; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}



