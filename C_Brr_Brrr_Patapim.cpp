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
        ll n;
        cin >> n;
        unordered_map<ll, ll> mp;
        vll arr(2*n + 1);
        ll sum = 0;
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < n; j++)
            {
                cin >> arr[i + j+1];
             //   high = max(high, arr[i + j+1]);
                if(mp[arr[i+j+1]] != 1)
                {
                    sum += arr[i+j+1];
                    mp[arr[i+j+1]] = 1;
                }
            }
        }

      //  cout << sum << nl;
        ll high = n*2;
        arr[0] = (high*(high+1))/2 - sum;
        for(ll i = 0; i < 2*n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << nl;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
