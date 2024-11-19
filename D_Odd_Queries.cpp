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

    ll t;
    cin>>t;
    while (t--)
    {
        
        ll n, q;
        cin >> n >> q;
        vll arr(n), hash(n,0);
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(i == 0)
            {
                hash[i] = arr[i];
            }
            else
            {
                hash[i] = hash[i-1] + arr[i];
            }
        }
        while(q--)
        {
            ll l , r, k;
             cin >> l >> r >> k;
            l--, r--;
            ll sum = hash[n-1] - (l ? (hash[r] - hash[l-1]) : hash[r]);
            sum += (r-l+1)*k;
            if(sum&1) YES;
            else NO;
        }

    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
