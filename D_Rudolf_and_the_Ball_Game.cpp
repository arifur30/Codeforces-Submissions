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

void increaseClockwise(ll &cur, ll n, ll r)
{
    if(cur + r > n)
    {
        cur = 0 + (cur + r - n);
    }
    else
    {
        cur += r;
    }
}

void increaseAntiClockwise(ll &cur, ll n, ll r)
{
    if(cur - r <= 0)
    {
        cur = n - (r - cur);
    }
    else
    {
        cur -= r;
    }
}
int main()
{
    

    ll t;
    cin>>t;
    while (t--)
    {
        
        ll n, m, x;
        cin>>n>>m>>x;

        vll r(m), ans; vector<char> c(m);
        fr(i,m)
        {
            cin>>r[i]>>c[i];
        
        }
        ll current1 = x, current2 = x;
        fr(i,m)
        {

            if(c[i] == '0')
            {
                increaseClockwise(current1, n, r[i]);
                increaseClockwise(current2, n, r[i]);
            }
            else if(c[i] == '1')
            {
                increaseAntiClockwise(current1, n, r[i]);
                increaseAntiClockwise(current2, n, r[i]);
            }
            else
            {
                increaseClockwise(current1, n, r[i]);
                increaseAntiClockwise(current2, n, r[i]);
            }

            
        }
        
        sort(ans.begin(), ans.end());
        cout<<ans.size()<<nl;
        for(auto i: ans)
            cout<<i<<" ";
        cout<<nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
