#include<stdio.h>
#include<stdlib.h>
#include<string.h>
                                                    //              ACCEPTED

int main()
{
    int i , l , a[6] , x, j = 0 , cnt = 0;
    char str[100];
    gets(str);
    l = strlen(str);
    for( i = 0 ; i < l ; i++){
            if(str[i] == 'h'){
               a[j] = i;
               x = i;
               j++;
                break;
            }

    }
    for(i = x +1;i<l;i++){
        if(str[i]=='e'){
            a[j] = i;
            j++;
            x = i;
            break;
        }
}
    for( i = x+1 ; i < l ; i++){

            if(str[i]=='l'){
            a[j] = i;
            x = i;
            j++;
            break;
        }
    }

    for( i = x+1 ; i < l ; i++){

             if(str[i]=='l'){
            a[j] = i;
            x = i;
            j++;
            break;
        }
    }
    for( i = x+1 ; i < l ; i++){

             if(str[i]=='o'){
            a[j] = i;
            x = i;
            j++;
            break;
        }
    }
    for( i = 0 ; i < j - 1 ; i++){
        if(a[i] < a[i +1]){
            cnt++;
        }
    }
    if(cnt == 4){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
