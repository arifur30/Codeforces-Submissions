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


ll maxSubArraySumLessThanK(vector<ll>& nums, ll k) {
    set<ll> prefixSumSet;
    prefixSumSet.insert(0);
    ll prefixSum = 0, maxSum = INT_MIN;

    for (ll num : nums) {
        prefixSum += num;
        auto it = prefixSumSet.lower_bound(prefixSum - k);
        if (it != prefixSumSet.end()) {
            maxSum = max(maxSum, prefixSum - *it);
        }
        prefixSumSet.insert(prefixSum);
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
    while (t--)
    {
        ll n, W, sum = 0;
        cin >> n >> W;
        vll arr(n);
        for(ll i = 0; i < n; i++)
            cin >> arr[i],
            sum += arr[i];

        ll msum = maxSubArraySumLessThanK(arr, W);
       // cout<<sum <<" "<< msum << " " << ceil (sum / (msum * 1.0))<<nl;
        cout<<ceil (sum / (msum * 1.0))<<nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
