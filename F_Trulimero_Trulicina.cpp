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
        
        ll n,m,k;
        cin >> n >> m >> k;
        
        vll ans(k);
        for(ll i = 1; i <=k;i++)
            ans[i-1] = i;
        
        if(m % k)
        {
            for(ll i = 0, cnt = 0; i < (n*m)/k; i++)
        {
            for(ll j = 0; j < ans.size();j++,cnt++)
            {
                if(cnt == m)
                {
                    cnt = 0;
                    cout << nl;
                }
                cout << ans[j] << " ";
            }
            
            
        }
            cout << nl;
          //  continue;
        }
       
        else
        { 
                
            ll start = 0;
            for(ll i = 0, c = 0; i < (n*m)/k; i++)
            {
                for(ll j = start, cnt = 0; cnt < k; cnt++, c++, j++)
                {
                    if(c == m)
                {
                    c = 0;
                    cout << nl;
                }
                    cout << ans[j%k] << " ";
                }
                cout << nl;
                start++;
                
        }
    }
       
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
