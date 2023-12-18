#include<stdio.h>
#include<string.h>
int main()
//                                                      ACCEPTED
{
    int n, x, i, j;
    char students[1002] ;
    scanf("%d %d\n", &n, &x);
    gets(students);
    for(i = 0; i< x; i++){
            for(j = 0; j<n-1; j++){
                    if( students[j] == 'B' && students[j+1] == 'G'){
                            students[j] = 'G';
                            students[j+1] = 'B';
                            j++;
                    }
            }
    }
    printf("%s", students);
return 0;
}
