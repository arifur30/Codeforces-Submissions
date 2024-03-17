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

    ll t;
    cin>>t;
    while (t--)
    {
        ll n, min_a = INT_MAX, min_b = INT_MAX, cnt = 0;
        cin>>n;
        vll a(n), b(n);
        fr(i,n)
        {
            cin>>a[i];
            min_a = min(min_a, a[i]);
        }
        fr(i,n)
        {
            cin>>b[i];
            min_b = min(min_b, b[i]);
        }
        fr(i,n)
        {
            if(a[i] > min_a && b[i] > min_b)
            {
                ll x = min(a[i] - min_a, b[i] - min_b);
                a[i] -= x;
                b[i] -= x;
                cnt += x;
            }
            if(a[i] > min_a)
            {
                cnt += a[i] - min_a;
                a[i] = min_a;
            }
            if(b[i] > min_b)
            {
                cnt += b[i] - min_b;
                b[i] = min_b;
            }
        }
        cout<<fixed<<cnt<<nl;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
