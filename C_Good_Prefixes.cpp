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
        bool prev = false;
        
        ll n, cnt = 0,cmp;
        cin >> n;
        vll dp(n), arr(n);
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(i == 0) dp[i] = arr[i];
            else dp[i] = dp[i-1] + arr[i]; 
        }
        cmp = arr[0];
        for(ll i = 0; i < n; i++)
        {
            if(i == 0 && dp[0] == 0) 
            { 
                cnt++, 
                prev = true;
                continue;
            }
            cmp = max(cmp, arr[i]);
            if(i > 0 &&  dp[i-1] == arr[i]) cnt++, prev = true; 
            else{
                if(arr[i] == 0 && prev) cnt++;
                else if(dp[i-1] - cmp + arr[i] == cmp) 
                    {
                        cnt++;
                        prev = true;
                }
                else prev = 0;
            }

        //   cout << arr[i] << " " << dp[i-1] << " " << cnt << nl;
        }
        cout << cnt << nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
