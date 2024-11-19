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

const int MOD = 1000000007;


long long maxSubArraySum(const std::vector<long long>& arr) {
    long long currentSum = arr[0];
    long long maxSum = arr[0];

    for (size_t i = 1; i < arr.size(); i++) {
        currentSum = std::max(arr[i], currentSum + arr[i]);
        maxSum = std::max(maxSum, currentSum);
    }

    return maxSum;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, totalsum = 0, psum = 0;
        cin>>n>>k;
        vll a(n);
        fr(i,n)
        {
            cin>>a[i];
            totalsum = (totalsum + a[i]) % MOD; // Perform modular arithmetic to avoid overflow
        }

        psum = maxSubArraySum(a);
        if(psum <= 0)
            psum = 0;
        while(k > 0 && psum)
        {
            totalsum = (totalsum + psum) % MOD; // Perform modular arithmetic to avoid overflow
            psum = (psum * 2) % MOD; // Perform modular arithmetic to avoid overflow
          //  cout<<"T "<<totalsum<<nl;
            k--;
        }
        
        cout<<(totalsum % MOD + MOD) % MOD<<nl; // Perform modular arithmetic to obtain valid output
    }
    
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
