#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define may cout << "MAYBE\n"
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
// 5 4 3 2 1
// 1 2 3 4 5
    ll t;
    cin>>t;
    while (t--)
    {
        int n , f, k;
        cin >> n >> f >> k;
        f--;
        k = n - k;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
           cin >> v[i]; 
        }
        int fav = v[f];
        sort(v.begin(), v.end());
        //  for(auto x: v)
        //  {
        // cout << x << " ";
        //  }
        int l = lower_bound(v.begin(), v.end(), fav) - v.begin();
        int r = upper_bound(v.begin(), v.end(), fav) - v.begin();
        r--;
      //  cout << nl << l << " " << r << nl;
        if(r < k )
            NO;
        else if(l < k && v[l] == fav && r >= k)
            may;
        else 
            YES;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
