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

vector<bool> prime = sieveOfEratosthenes(200000);

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
        cin >> n;
        
        if(n < 5)
        {
            cout << -1 <<nl;
            continue;
        }

        for(ll i = 1; i <= n; i+=2)
        {
            if(i==5) continue;
            cout << i  << " ";
        }
        cout << "5 4 ";
        for(ll i = 2;  i <= n; i+=2)
        {
            if(i == 4) continue;
            cout <<i << " ";
        }
        cout << nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
