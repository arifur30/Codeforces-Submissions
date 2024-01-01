#include<stdio.h>
#include<string.h>


int main ()
{
    int arr[] = {1,0,0,5};
    // lets swap 1 (index 0)and 5 (index 3)
    printf("Before: ");
    for(int i =0;i<4;i++)
        printf("%d ", arr[i]);

    int temp;
    temp = arr[0];  // saving value of 0 index in temp variable
    arr[0] = arr[3]; // assigning the value of 3-th index in 0-th index
    arr[3] = temp;  // assigning the saved value of 0-th index in 3th index
    printf("\n\nAfter: ");
    for(int i =0;i<4;i++)
        printf("%d ", arr[i]);
    
    return 0;
}



