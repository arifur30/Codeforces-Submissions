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


// Function to implement the Sieve of Eratosthenes
vector<bool> sieveOfEratosthenes(long long n) {
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for (long long p = 2; p*p <= n; p++) {
        if (prime[p] == true) {
            for (long long i = p*p; i <= n; i += p)
                prime[i] = false;
        }
    }
    return prime;
}

vector<bool> prime = sieveOfEratosthenes(10000);


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll n , m;
    cin>>n>>m;
    if(n == m)
    {
        cout<<n<<nl;
        return 0;
    }
    else if(n < m)
    {
        cout<<-1<<nl;
        return 0;
    }
    else
    {
        ll ans = ceil(n/ 2.0);
        if(ans%m != 0)
        {
            ans = ceil(ans/(m*1.0)) * m;
            if(ans <= n && ans % m == 0)
                cout<<ans<<nl;
            else
                cout<<-1<<nl;
        }
        else
            cout<<ans<<nl;

        return 0;
    }
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
