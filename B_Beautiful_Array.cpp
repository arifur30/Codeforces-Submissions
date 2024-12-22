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
#define MOD 1e9 +7
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
      //  cout << "Case #" << t << ": ";
        ll n , k, b , s;
        cin >> n >> k >> b >> s;
        if(s / k == b)
        {
            cout << s << " ";
            for(ll i = 1; i < n;i++)
            {
                cout << 0 << " ";
            }
            cout << nl;
        }
        else if(s/k > b)
        {
            vll ans(n);
            ll temp = (k*b);
            ans[0] = temp = min(temp, s);
            s -= temp;
            
            if(s)
            {
               // cout << temp << " ";
                for(ll i =0; i < n; i++)
                {
                    //cout << max(0ll, min(k-1, s)) << " ";
                    ans[i] += min(k-1, s);
                    s -=  min(k-1, s);
                }
                if(s>0) cout << -1 << nl;
                else
                {
                    for(auto x : ans)
                    {
                        cout << x << " ";
                    }
                    cout << nl;
                }
                
            }
            else
            {
                cout << -1 << nl;
            }
        }
        else
        {
            cout << -1 << nl;
        
        }
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
