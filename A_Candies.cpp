#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" "

map<ll, ll> mp;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(ll i = 1; i <= 30; i++)
    {
        ll x = pow(2,i) - 1;
        mp[i] = x;
    }
    ll t;
    cin>>t;
    while (t--)
    {
        long double n, ans;
        cin>>n;
       // bool flag = false;
        for(ll i = 2; i <=30; i++)
        {
            ans = n / mp[i];
            if(ans == (ll)ans)
            {
                cout<<(ll)ans<<nl;
              //  flag = true;
                break;
            }
        }
        
    }
    
    return 0;
}
    