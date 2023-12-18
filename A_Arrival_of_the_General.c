#include<stdio.h>
int main(int argc, char const *argv[])
{       //accepted
    int n, i, j, min = 101, max = 0, max_i = 0, min_i =0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);

            if(arr[i] > max)
            {
                max = arr[i];
                max_i = i;
            }
            if(min>=arr[i])
            {
                min = arr[i];
                min_i = i;
            }
        }
    if(max_i > min_i)
    {
        j = max_i + (n-2-min_i);
    }
    else
    {
        j = max_i + (n-1-min_i);
    }
    printf("%d\n", j);

    return 0;
}
