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
ll n;
    cin>>n;
    vll arr;
    for(ll i = 1; i<=5; i++ )
    {
        arr.pb(i);
    }
    for(ll i = 0; i < n; i++)
    {
        arr.pb(arr[i]);
        arr.pb(arr[i]);
    }

    
    ll ans = arr[n-1];
    if(ans == 1)
    {
        cout<<"Sheldon";
    }
    else if(ans == 2)
    {
        cout<<"Leonard";
    }
    else if(ans == 3)
    {
        cout<<"Penny";
    }
    else if(ans == 4)
    {
        cout<<"Rajesh";
    }
    else
    {
        cout<<"Howard";
    }
    cout<<nl;
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
