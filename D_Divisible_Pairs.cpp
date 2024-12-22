#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll n , x, y, cnt = 0;
        cin>>n>>x>>y;
        map< pair<ll,ll> , ll> mp;
        ll a;
        for(ll i=0;i<n;i++)
        {
            
            cin >> a;
            ll xx = a%x;
            if(mp.find(make_pair((x-xx) %x, a%y)) != mp.end())
            {
                cnt += mp[make_pair( (x-xx)%x, a%y)];
                
            }
            ++mp[make_pair(a%x, a%y)];
        }
        cout<<cnt<<nl;
        
    }
    
    return 0;
}
    