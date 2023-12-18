#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b){
        if(b > c){
            printf("%d %d %d\n", c, b, a);
        }
        else if(a > c){
            printf("%d %d %d\n", b, c, a);
        }else{
            printf("%d %d %d\n", b, a, c);
        }
    }
}
