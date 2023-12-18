#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n , m , i , min;
    scanf("%d %d\n", &n , &m);
    int ara[m+1];
    for(i = 0; i < m ; i++)
    {
        scanf("%d", &ara[i]);
    }
    sort(ara, ara + m);
    printf("%d\n", ara[n-1] - ara[0]);
    return 0;
}

