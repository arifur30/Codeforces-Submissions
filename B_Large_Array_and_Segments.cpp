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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        
        ll n, k , x;
        cin >> n >> k >> x;

        vll arr(n*k);
        for(ll i = 0; i < n; i++) {
            
            cin >> arr[i];
            // if(i == 0) sum[i] = arr[i];
            // else sum[i] = arr[i] + sum[i-1];
        
        }

        
        

        for(ll i = n; i < n*k; i++)
        {
            arr[i] = arr[i-n] ;
          //  sum[i] = arr[i]+ sum[i-1];
            
        }

        // for(auto &i : arr) cout << i << " ";
        // cout << nl;

        unsigned long long res = 0;
        
        unsigned long long sum = 0;

        for(ll l=0,r=0; r < n*k; r++)
    {
        sum += arr[r];
        while(sum >= x)
        {
            res += (n-r);
            sum -= arr[l];
            l++;
        }
        
    }
    cout<<res<<nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
