#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{

    int t;
    scanf("%d", &t);
    while(t--)
    {
        double a , b, alpha, beta;
        scanf("%lf %lf %lf %lf", &a, &b, &alpha, &beta);
        if(alpha > 90)
            alpha += 180;
        if(beta> 90)
            beta += 180;
        double line1 = b / cos((alpha*M_PI)/180);
        double line2 = b / cos((beta*M_PI)/180);

        double sum = 0;
        sum = a+ b+b+ line1+line2;
        double f_point = b * tan((alpha*M_PI)/180);
        double s_point = b * tan((beta*M_PI)/180);
        double diff = abs(f_point - s_point) /2;
        sum -= diff/ cos((90-beta)*M_PI / 180);
        sum -= diff/ cos((90-alpha)*M_PI / 180);

        printf("%0.4lf\n",sum);
      //  printf("%0.4f\n",cos(45));
    }

}

