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

    ll n, q;
    cin >> n >> q;
    set < ll > s[n];
    while(q--)
    {
        ll type, x, y;
        cin >> type ; 
        if( type == 0)
        {
            cin >> x >> y;
            s[x].insert(y);
        }
        else if( type == 1)
        {
            cin >> x;
            if(s[x].empty())
            {
                continue;
            }
            auto it = s[x].end();
            --it;
            cout << *it << nl;
        }
        else if( type == 2)
        {
            cin >> x;
            if(s[x].empty())
            {
                continue;
            }
             auto it = s[x].end();
            --it;
            s[x].erase(it);
        }
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
