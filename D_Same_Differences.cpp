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

long long nCr(long long n, long long r) {
    if (r > n - r)
        r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    for (long long i = 0; i < r; i++) {
        ans *= n - i;
        ans /= i + 1;
    }
    return ans;
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
        ll arr[n],cnt =0;
        map<ll, ll>mp;
        fr(i,n)
        {
            cin>>arr[i];
            mp[arr[i]-i]++;
        
        }
        for(auto it: mp)
        {
            if(it.second > 1)
            {
                cnt += nCr(it.second, 2);
            }
        }
        cout<<cnt<<nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
