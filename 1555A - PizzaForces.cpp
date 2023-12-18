#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    scanf("%d\n", &t);
    for ( int i =0; i<t  ;i++ )
    {
        ll n;
        scanf("%lld" , &n);
        n = (n+1)/2;
        if(n < 3)
            n =3;
        printf("%lld\n", n*5);

    }
return 0;
}

