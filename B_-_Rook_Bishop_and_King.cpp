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

    ll r1, c1, r2, c2;
    cin>>r1>>c1>>r2>>c2;

    // for rook
    if(r1 == r2 && c1 == c2)
        cout<<0<<" ";
    else if(r1 == r2 || c1 == c2)
        cout<<1<<" ";
    else cout << 2 << " ";

    // for bishop
    if((r1+c1)%2 != (r2+c2)%2)
        cout<<0<<" ";
    else if(r1+c1 == r2+c2 || r1-c1 == r2-c2)
        cout<<1<<" ";
    else cout<<2<<" ";

    //for king
    cout<<max(abs(r1-r2), abs(c1-c2))<<nl;
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
