#include<stdio.h>

int main()
{

    int n,even = 2, odd = 3;
    float sum =1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
        sum += 1.0/i;

    printf("answer: %f\n",sum);
}
