#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl


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
        cin>>n;
        ll arr[n];
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
         //   b[i] = arr[i];
        }
      //  ll sum1 = findsum2(arr, n);
       sort(arr, arr+n);
        ll a = arr[0];
        ll b = arr[1];
        ll c = arr[n-2];
        ll d = arr[n-1];
        
        ll ans = abs(a-d)+ abs(b-c)+ abs(a-c)+ abs(d-b);
        cout<<ans<<nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
