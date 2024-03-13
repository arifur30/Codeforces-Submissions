#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl
#define arrin2(arr, b, n) for(ll i = 0; i < n; i++) {cin>>arr[i];b[i] = arr[i];}
#define arr2din(arr, n, m) for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin>>arr[i][j]
#define fr(i, n) for(ll i = 0; i < n; i++)
#define pb push_back
#define vll vector<ll>
map<ll, ll> mp;
ll solve(ll &n)
{
    ll cnt = 0;
    while(n%6 == 0)
    {
        n /= 6;
        cnt++;
    }
    if(mp[n])
        return cnt;
    else
        return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(ll i = 1; i <= 166666666; i++)
    {
        mp[i*6] = 1;
    }

    ll t;
    cin>>t;
    while (t--)
    {
        ll n, cnt = 0;
        cin>>n;
        if(n == 1)
        {
            cout<<0<<nl;
            continue;
        }
        if(n < 6)
        {
            cout<<-1<<nl;
            continue;
        }
        if(n&6 != 0)
        {
            n*= 2;
            cnt++;
        }
        else if(n%6 == 0)
        {
            cout<<solve(n)+cnt<<nl;
        }
        else
        {
            cout<<-1<<nl;
        }
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
