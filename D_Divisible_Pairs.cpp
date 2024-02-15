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
        ll n , x, y;
        cin>>n>>x>>y;
        ll arr[n], cnt = 0;
        arrin(arr, n);
        for(ll i =0;i<n;i++)
        {
            for(ll j = i+1; j<n; j++)
            {
                ll a= arr[i] + arr[j];
                ll b = abs(arr[i] - arr[j]);
                if(a%x == 0 && b%y == 0)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<nl;
    }
    
    return 0;
}
    