#include<bits/stdc++.h>
using namespace std;


using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl

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

vector<bool> prime = sieveOfEratosthenes(1e5+7);

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
        for(ll i= n; i >= 1; i--)
        {
            if(!prime[i])
                cout << i << " ";
        }
        for(ll i = 1; i <= n; i++)
        {
            if(prime[i])
                cout << i << " ";
        }
        cout<<nl;
    }

    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
