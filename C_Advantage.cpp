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
        ll n,mx = 0, secmx = 0;
        cin>>n;
        vll arr(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] >= mx)
            {
                secmx = mx;
                mx = arr[i];
                
            }
            else if(arr[i] > secmx)
            {
                secmx = arr[i];
            }
        }
        fr(i,n)
        {
            if(arr[i] == mx)
            {
                
                cout << mx - secmx<<" ";
            }
            else{
                cout<<arr[i] - mx <<" ";
            }
        }
        cout<<nl;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
