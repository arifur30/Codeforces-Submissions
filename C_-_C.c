#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t, n, i, k;
    scanf("%d", &t);
    while (t--)
    {
        
        scanf("%d", &n);
        k = n/2;
        if(n%2 == 0)
        {
            printf("YES\n");
            for(i=0;i<(n/2);i++)
                printf("1 -1 ");
            printf("\n");
        }
        else if(n%2 != 0 && n>=5)
        {
            printf("YES\n");
            for(i=0;i<(n/2);i++)
                printf("%d %d ", k-1, -k);
            printf("%d\n",k-1);
        }
        else
            printf("NO\n");
        
        
    }
    
    return 0;
}

/*
If n
 is even, the array [−1,1,−1,1,…,−1,1]
 is a solution. The sum of any two adjacent elements is 0
, as well as the sum of the whole array.

Suppose that n
 is odd now. Since si−1+si
 and si+si+1
 are both equal to the sum of the whole array for each

Unable to parse markup [type=CF_MATHJAX]

, it must also hold that si−1+si=si+si+1
, which is equivalent to si−1=si+1
. Let's fix s1=a
 and s2=b
. The condition above produces the array s=[a,b,a,b,…a,b,a]
 (remember that we consider an odd n
).
Let k
 be a positive integer such that n=2k+1
. The sum of any two adjacent elements is a+b
 and the sum of the whole array is (k+1)a+kb
. Since the two values are equal, we can conclude that ka+(k−1)b=0
. a=k−1
 and b=−k
 produces an answer. But, we must be careful with a=0
 and b=0
 since that is not allowed. If k=1
 then ka+(k−1)b=0
 implies ka=0
 and a=0
, so for n=2⋅1+1=3
 an answer does not exist. Otherwise, one can see that a=k−1
 and b=−k
 will be non-zero, which produces a valid answer. So, the array [k−1,−k,k−1,−k,…,k−1,−k,k−1]
 is an answer for k≥2
 (n≥5
).


*/