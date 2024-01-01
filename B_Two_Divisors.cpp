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
        ll a, b;
        cin>>a>>b;
        if(a == 1)
            cout<<b*b<<nl;
        else if(b%2 == 0)
            cout<<b*2<<nl;
        else
            cout<<a*b<<nl;        
    }
    
    return 0;
}
    