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
        
        vector<ll> turns(2e5+10, 0);
        ll h,n;
        cin >> h >> n;
        vector<ll> attack(n), c(n);
        arrin(attack, n);
        arrin(c, n);

        for(ll i = 0; i < n; i++)
        {
            h -= attack[i];
            turns[c[i] + i] = attack[i];
        }
        if(h <=0)
        {
            cout << 1 << nl;
            continue;
        }
        ll ans = 1;
       
        for(ll i = 1; i < turns.size()-3 && h > 0; i++)
        {
            
            if(turns[i] == 0)
            {
                ans++;
                continue;
            }
            else
            {
                h -= turns[i];
                ans++;
                turns[c[i%3] + i] = turns[i];
            }
             
        }
        cout << ans << nl;


    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
