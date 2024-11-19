#include <stdio.h>

int main()
{

    int arr[6] = {0};
// 7 7 7 7 7 7
    int i;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
// 1 2 3 4 5 7

    printf("%d ", arr[5]);      // arr[5]   arr[4]



}
