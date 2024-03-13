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
#define pb push_back
#define vll vector<ll>


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
        ll n;
        cin>>n;
        ll b[n];
        fr(i,n)
        {
            cin>>b[i];
            if(i > 0)
            {
                b[i] += b[i-1];
            }
        }
        
        ll m;
        cin>>m;
        while(m--)
        {
            ll x;
            cin>>x;
            bool flag = false;
            if(x <= b[0])
            {
                cout<<1<<nl;
                continue;
            }
            ll ans = lower_bound(b, b+n, x) - b;
            cout<<ans+1<<nl;
        }

    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
