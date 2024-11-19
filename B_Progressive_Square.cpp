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
        
        ll n, c,d;
        cin>>n>>c>>d;
        vll a(n*n), b;
        arrin(a,n*n);
        sort(all(a));

        for(ll i = a[0], x = 0; x <n; x++ , i += c)
        {
            for(ll j =0, y = 0; j < n; j++, y += d)
            {
                b.pb(i+y);
            }
        }

       // cout<<b.size()<<nl;
        sort(all(b));
       // arrout(b, b.size());
      //  arrout(a, n*n);
        if (a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin()))
            YES;
        else NO;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
