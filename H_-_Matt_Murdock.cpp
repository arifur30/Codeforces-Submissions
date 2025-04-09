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

    ll n; cin >> n;

    vll a(n), b;
    arrin(a, n);

    for(ll i = 0; i < n; i++)
    {
        for(ll j = n-1; j > i; j--)
        {
            if(a[j] <= a[i]) continue;

            if(__gcd(a[j], a[i]) != 1)
            {
                b.push_back(i+1);
                b.pb(j+1);
                break;
            }
        }
    }

    ll sz = b.size();
    if(!sz )
    {
        cout << "1\n1\n";
    }
    else
    {
        cout << sz << nl;
        for ( auto &i: b) cout << i << " ";
        cout << nl;
    }
    
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
