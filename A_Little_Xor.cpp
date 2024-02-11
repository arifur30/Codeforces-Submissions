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
    ll ans = 0, arr[n], m = 0;
    for(ll i =0; i < n; i++)
    {
        cin >> arr[i];
        if(m < arr[i])
            m = arr[i];
    }
    for(ll i = 0; i < n; i++)
    {
        ll x = arr[i];
        for(ll j = i+1; j < n; j++)
        {
            x ^= arr[j];
            m = max(m, x);
        }
    }
    cout << m << nl;
    return 0;
}
    