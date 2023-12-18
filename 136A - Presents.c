#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
            //                              ACCEPTED
int main()
{
    int n , a[110]; // the values of i-th element can be greater than i, so it is wise
     to take greater value for 'a'
    scanf("%d\n", &n);
    int x[n +10];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &x[i]);

    }
    for(int i = 0 ; i< n ; i++)
    {
        a[x[i]] = i + 1;
    }
    for(int i = 1; i<= n ; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

/*
In this problem one had to read a permutation and output the inverse permutation to it. It can be found with the following algorithm.
When reading the i-th number, which is equal to a one can store i into the a-th element of the resulting array. The only thing left is to output this array.

The complexity is O(N). */




/*                                                              This is ᴀʀɪғᴜʀ ʀᴀʜᴍᴀɴ 𝔄𝔯𝔦𝔣                                                   -----
                                                        Username: 𝔸𝕣𝕚𝕗.𝟛𝟘 (Codeforces)                                             ---      ---
                                                       20- years- old , from Bangladesh                                        -----  ---    ----
                                                                                                                                                            | | |          |||
                                                                                                                                                            ------         ------

*/

