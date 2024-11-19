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

long long binaryexpPow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a* a) % MOD;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);



    // cout<<binaryexpPow(99, 15)<<nl;
    // cout<<pow(99, 15)<<nl;
  //  return 0;
    ll t;
    cin>>t;
    while (t--)
    {
        
        ll n,k,k1,k2,sum = 0, cnt = 0;
        cin>>n>>k;
        vll a(n);
        fr(i,n)
        {
            cin>>a[i];
            sum += a[i];
        }
        if(sum <= k)
        {
            cout<<n<<nl;
            continue;
        }
        (k % 2 == 0) ? k1 = k/2 : k1 = k/2 + 1; 
        k2 = k/2;

        fr(i,n)
        {
            if(a[i] <= k1)
            {
                cnt++;
                k1 -= a[i];
            }
            else break;
        }
        frr(i,n)
        {
            if(a[i] <= k2)
            {
                cnt++;
                k2 -= a[i];
            }
            else break;
        }
        cout<<cnt<<nl;
    }
    
    return 0;
}






// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
