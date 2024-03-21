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



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    ll a[n], b[n], c[n], d[n], m ;
    fr(i,n)
    {
        cin >> a[i];
        c[i] = a[i];
        if(i == 0)
            b[i] = a[i];
        else
            b[i] = b[i-1] + a[i];
    }
    sort(c, c+n);  
    fr(i,n)
    {
        if(i == 0)
            d[i] = c[i];
        else
            d[i] = d[i-1] + c[i];
    }  
    cin>>m;
    while(m--)
    {
        ll tp, l , r;
        cin>>tp>>l>>r;
        if(tp == 1)
        {
            cout<<b[r-1] - b[l-1] + a[l-1]<<nl;
        }
        else
            cout<<d[r-1] - d[l-1] + c[l-1]<<nl;

    }
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
