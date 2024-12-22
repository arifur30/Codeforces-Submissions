#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for (ll i = 0; i < n; i++) cin >> arr[i]
#define arrout(arr, n) for (ll i = 0; i < n; i++) cout << arr[i] << " "; cout << nl
#define arrin2(arr, b, n) for (ll i = 0; i < n; i++) { cin >> arr[i]; b[i] = arr[i]; }
#define arr2Din(arr, n, m) for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) cin >> arr[i][j]
#define fr(i, n) for (ll i = 0; i < n; i++)
#define frr(i, n) for (ll i = n - 1; i >= 0; i--)
#define pb push_back
#define vll vector<ll>
#define MOD 1000000007
#define all(x) x.begin(), x.end()




ll findMSB(ll num) {
    if (num == 0) return 0; // Edge case for 0

    ll msb = 0;
    while (num > 1) {
        num >>= 1;
        msb++;
    }
    return 1 << msb; // Return the value of the MSB
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, m, cnt = 0;
        cin >> x >> m;
        ll l = findMSB(x);

        //cout << (l << 1)<< nl;

        for(ll i = 1; i <= min(m,(l << 1)); i++)

        {
            if(i == x) continue;
            if( x % (x^i) == 0  || i % (x^i) == 0)
            {
                cnt++;
            }
        }
        cout << cnt << nl;
        
      



    }

    return 0;
}
