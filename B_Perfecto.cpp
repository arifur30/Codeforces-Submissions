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

bool isbad(ll sum)
{
    ll s = sqrtl(sum);
    return (s*s == sum);
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
        ll sum;
        cin >> n;
        sum = n*(n+1)*0.5;
        if(isbad(sum))
        {
            cout << -1 << nl;
            continue;
        }
        vector<ll>good, rejected;
        sum = 0;

        for(ll i = n; i >= 1; i--)
        {
            if(isbad(sum+i))
            {
                rejected.pb(i);
                
            }
            else
            {
                good.pb(i);
                sum += i;
            }
            
        }

        for(auto &i: rejected)
            good.pb(i);
        
        for(auto &i: good)
        {
            cout << i << " ";
        }
        cout << nl;

        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
