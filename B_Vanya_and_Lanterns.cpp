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
    
    ll n , l;
    cin>>n>>l;
    vector<ll> v(n);
    for(ll i = 0 ; i < n ; i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    ll maxx = 0, prev_max = 0;
    for(ll i = 0; i < n-1 ; i++)
    {
        if(v[i+1] - v[i] > maxx){
            prev_max = maxx;
            maxx = v[i+1] - v[i];
        }
    }
    
    maxx = max(l-v[n-1], maxx);
   // cout<<maxx<<nl;
    double ans;
    if(maxx / 2.0 >=  v[0] && maxx / 2.0 >= l - v[n-1])
    {
        ans = maxx /2.0;
    }
    else if(v[0] > l - v[n-1])
    {
        ans = v[0];
    }
    else
    {
        ans = l - v[n-1];
    }
    cout<<fixed<<setprecision(10)<<ans<<nl;
    
    return 0;
}
    