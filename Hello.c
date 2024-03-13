#include<stdio.h>

int main()
{
    int arr[] = {10,20, 10 , 10, 100}, size = 5;

    for(int i = 0; i < size; i++)
    {

        for(int j = i+1; j<size ; j++)
        {

            if(arr[i] == arr[j])
            {
                for(int k = j; k < size-1; k++)
                {

                    arr[k] = arr[k+1];
                    size--;
                    j--;
                }
            }
        }
    }

    for(int i =0; i< 5; i++)
        printf("%d ", arr[i]);

}
