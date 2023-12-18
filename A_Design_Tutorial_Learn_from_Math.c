#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//          accepted
int prime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
   {
      if(x%i == 0)
      {
         return 1;
      }
   }
   return 0;
}

int main(int argc, char const *argv[])
{
    int x,i,j;
    scanf("%d", &x);

    int ans1, ans2;
    
        if(x%2 == 0)
        {
            ans1 = 8;
            ans2 = x - 8;
            if(prime(ans2) == 1)
            {
                printf("%d %d\n", ans1, ans2);
            }
        }
        else{
            ans1 = 9;
            ans2 = x -9;
            if(prime(ans2) == 1)
            {
                printf("%d %d\n", ans1, ans2);
            }
        }
    return 0;
}
