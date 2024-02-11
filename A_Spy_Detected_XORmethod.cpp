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
        ll n;
        cin >> n;
        ll ans = 0, cn;
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            if(ans^x != 0)
                cn = ans;
            ans ^= x;
        }
        cout<<cn<<nl;

    }
    
    return 0;
}
    