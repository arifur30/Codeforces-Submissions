#include<stdio.h>
#include<math.h>
int main()
{
double n,m,x,y,a ;
 scanf("%lf %lf %lf", &n, &m, &a);

 printf("%.0lf", ceil(n/a) * ceil(m/a));
}
