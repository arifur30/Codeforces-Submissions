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

bool checkdigits(ll n)
{
    ll prev = n % 10;
    while(n)
    {
        if(n%10 != prev)
            return false;
        n /= 10;
    }
    return true;
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
        ll n;
        cin>>n;
        if(n <= 9)
            cout<<n<<nl;
        else
        {
            ll ans = n/ 10;
            if(n >= ans*10 + ans)
                cout<<9 + ans<<nl;
            else cout<<9+ --ans<<nl;               
        }
    
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
