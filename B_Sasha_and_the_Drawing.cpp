#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" "



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;

    while (t--)
    {
        
        ll n , k;
        cin>>n>>k;
        ll d = (4*n)-2;
        ll ans = ceil(k/2.0);
        if(ans> d || k == d)
            cout<<n*2<<nl;
        else
            cout<<ans<<nl;
    }
    return 0;
}






// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .