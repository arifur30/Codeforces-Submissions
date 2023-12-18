#include<stdio.h>

        //                                                      ACCEPTED
int main()
{
   int i, num , arr[] = { 4,  7, 44, 47, 74, 77, 444, 447, 474, 477, 744,747, 777};
    scanf("%d", &num);
    for(i = 0 ; i<13 ; i++){
        if(num == arr[i]){
            printf("YES");
            return 0;
        }
        else if( num % arr[i] == 0){
                printf("YES");
                return 0;
        }
        else{
            if(i == 12){
                printf("NO");
            }
        }
    }
return 0;
}
