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
#define arr2Din(arr, n, m) for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin>>arr[i][j]
#define fr(i, n) for(ll i = 0; i < n; i++)
#define frr(i,n) for(ll i = n-1; i >= 0; i--)
#define pb push_back
#define vll vector<ll>

#define all(x) x.begin(), x.end()

int main()
{
    ll MOD = 1e9+7;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll arr(n);
        arrin(arr,n);

        ll sum = 0;

        map<pair<ll,ll>, bool> mp;

        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < n; j++)
            {
                if(i == j) continue;
                if(mp[{i,j}] || mp[{j,i}]) continue;
                mp[{i,j}] = true;
                mp[{j,i}] = true;
                sum += ((arr[i]% MOD)*(arr[i]%MOD) +MOD)%MOD;
                sum %= MOD;
                
            }
        }

        cout << sum << nl;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
