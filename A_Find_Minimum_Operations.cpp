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


// Function to calculate log base a of b
int logBase(double a, double b) {
    return std::log(b) / std::log(a);
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        int n, k, ans = 0;
        cin >> n >> k;

        if(k == 1)
        {
            cout << n << nl;
            continue;
        }
        if(n == 1)
        {
            cout << 1 <<nl;
            continue;
        }

        while(n > k && k > 1)
        {
            ans++;
            n -= pow(k, logBase(k,n));
        }

        if(n == k)
        {
            cout << ans + 1 << nl;
            continue;
        }
        else if(n == 0)
        {
            cout << ans << nl;
            continue;
        }

        else if(n < k)
        {
           //
            cout << ans + n << nl;
            continue;
        }

        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .

