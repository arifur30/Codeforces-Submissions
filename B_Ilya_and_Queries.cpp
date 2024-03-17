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

    string str;
    cin>>str;
    ll t;
    cin>>t;
    ll n = str.length(), a[n] = {0};
    for(int i = 1; i <= n; ++i) {
        if(i != n && str[i] == str[i - 1])
            a[i]++;
        a[i] += a[i  - 1];
    }
    while(t--)
    {
        ll l, r;
        cin>>l>>r;
        cout<<a[r - 1] - a[l - 1]<<nl;
    
    }
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
