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
        
        ll n, m, mx = 0;
        cin >> n >> m;
        ll a[n+1], b[n+1];
        a[0] = b[0]= 0;

        fr(i,n)
        {
            cin >> a[i+1] >> b[i+1];

            if((a[i+1] - a[i])%2 != (abs(b[i+1] - b[i]))%2)
            {
                mx += a[i+1] - a[i] - 1;
               // cout << "here" << a[i+1] << " " << mx <<  nl;
            }
            else {
                
                mx += a[i+1] - a[i];
                //cout << "there" << a[i+1] << " " << mx <<  nl;
        
        }
            

        }

      
        if(m > a[n])
        {
            mx += m - a[n];
        }

        cout << mx << nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
