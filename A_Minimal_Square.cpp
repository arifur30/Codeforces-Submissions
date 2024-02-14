#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll a, b, cp1, cp2;
        cin>>a>>b;
        cp1 = a*2;
        cp2 = b;
        b *= 2;
        if(a>b)
            a *= a;
        else a = b*b;

        if(cp1>cp2)
            cp1 *= cp1;
        else cp1 = cp2* cp2;
        cout<< min(a, cp1)<<nl;

    }
    
    return 0;
}
    