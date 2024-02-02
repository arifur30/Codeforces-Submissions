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
    
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    ll q;
    cin >> q;
    sort(a,a+n);
    while(q--)
    {
        ll x;
        cin >> x;
        ll ans = upper_bound(a,a+n,x) - a``;
        cout << ans << nl;
    }

    
    return 0;
}
    