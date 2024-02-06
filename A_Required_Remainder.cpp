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
        ll x, y, n;

        cin>>x>>y>>n;
        ll ans = n/ x;
        ans *= x;
        ans += y;
        if(ans <=n)
            cout<<ans<<nl;
        else
            cout<<ans - x <<nl;
    }
    
    return 0;
}
    