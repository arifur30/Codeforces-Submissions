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

    ll t, H, cnt = 0;
    cin>>t >> H;
    bool flag = true;
    while (t--)
    {
        
        vll a(3);
        cin >> a[0] >> a[1] >> a[2];
        if(a[0] > H and a[1] > H and a[2] > H)
        {
            cout << "impossible\n";
            flag = false;
            break;
        }

        sort(all(a));
        if(max(a[0],a[1]) > H)
        {
            cnt += max(a[0],a[1]);
        }
        else cnt += min(a[0],a[1]);

    }
    if(flag)
    cout << cnt << nl;
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
