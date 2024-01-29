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
        cin>>n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for(ll i = 0; i<n-2;i++)
        {
            ll j = i+1;
            while(j < n-1)
            {
                ll k = j+1;
                while(v[k] < v[i]+v[j] && k < n)
                {
                    ans++;
                    k++;
                }
                j++;
            }
            
        }
        cout<<ans<<nl;
    }
    
    return 0;
}
    