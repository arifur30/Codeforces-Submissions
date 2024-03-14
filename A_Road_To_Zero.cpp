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

ll solve(ll &x, ll &y, ll &a, ll &b)
{
    ll temp = x*2, ans = 0;
    if(a*temp<= b*x)
    {
        ans += a*temp;
        y -= x;
        x = 0;
      //  y -= x;
       // cout<<ans<<" "<<x<<" "<<y<<nl;
    }
    else{
        ans += b*x;
        y -= x;
        x = 0;
        
      //  cout<<ans<<" "<<x<<" "<<y<<nl;
    }
    ans += a*y;
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
        ll x, y, a, b, cnt = 0;
        cin>>x>>y>>a>>b;
        if(x == y)
        {
            cout<<min(a*x*2,b*x)<<nl;
            continue;
        }
        else if(!x && y)
        {
            cout<<a*y<<nl;
            continue;
        }
        else if(x && !y)
        {
            cout<<a*x<<nl;
            continue;
        }
        else if(x < y)
        {
            cout<<solve(x, y, a, b)<<nl;
        }
        else{
            swap(x,y);
            cout<<solve(x, y, a, b)<<nl;
        }
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
