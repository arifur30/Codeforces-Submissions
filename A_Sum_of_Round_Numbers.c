#include<stdio.h>
#include<math.h>
//      accepted
int check_digits(int x)
{
    int i = 0;
    while (x > 0)
    {
        if(x %10 > 0)
            i++;
        x /= 10;
    }
    return i;
}

int main(int argc, char const *argv[])
{
    int t, digits, i, n,temp;
    scanf("%d", &t);
    while (t--)
    {
        temp = 1;
        scanf("%d", &n);
        printf("%d\n",check_digits(n));
        while(n>0)
        {
            if(n%10> 0)
            {
                int rem = (n %10)*temp;
                printf("%d ", rem);
                n /= 10;
                temp *= 10;
            }
            if(n%10 == 0)
            {
                n /= 10;
                temp *= 10;
            }
        }
    printf("\n");
    }
    
    
    return 0;
}
