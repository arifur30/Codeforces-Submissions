
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
        int t, i,j ;
        char alt;
        scanf("%d\n", &t);
        char *num = malloc((2*t)*sizeof(char));
        gets(num);
       for(i = 0 ,j = (t*2) - 1 ; i<t - 1 , j>t; i++, j-- ){
            if(num[i] > num[i + 1]){
                alt = num[i];
                num[i] = num[i+1];
                num[i+1] = alt;
            }
             if(num[j] > num[j - 1]){
                alt = num[j];
                num[j] = num[j -1];
                num[j-1] = alt;
            }


       }
       for(i = 0 , j = )
    return 0;
}
