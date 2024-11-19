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
#define MOD 1000000007
#define all(x) x.begin(), x.end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,m;
    cin>>n>>m;
    map<ll , ll > mp;
    
    vll arr(n), freq(n,0);
    arrin(arr, n);

    frr(i,n)
    {
        if(i == n-1)
        {
            freq[i] = 1;
            mp[arr[i]]++;
            continue;
        }
        if(mp[arr[i]] == 0)
        {
            ++mp[arr[i]];
            freq[i] = freq[i+1] + 1;
        }
        else freq[i] = freq[i+1];
    }


    fr(i,m)
    {
        ll x;
        cin>>x;
        cout<<freq[x-1]<<nl;
    }


    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
