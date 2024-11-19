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
        ll n;
        bool f = true;
        cin >> n;
        ll m1,m2,m3,m4,m5, q1,q2,q3,q4,q5, r1,r2,r3,r4,r5;
        cin >> m1 >> q1 >> r1;
        if(m1 < 2 || q1 < 3 || r1 < 10)
        {
            f = false;
        }
        cin >> m2 >> q2 >> r2;
        if(m2 < 2 || q2 < 3 || r2 < 10)
        {
            f = false;
        }
        cin >> m3 >> q3 >> r3;
        if(m3 < 2 || q3 < 3 || r3 < 10)
        {
            f = false;
        }
        cin >> m4 >> q4 >> r4;
        if(m4 < 1 || q4 < 3 || r4 < 10)
        {
            f = false;
        }
        cin >> m5 >> q5 >> r5;
        if(m5 < 3 || q5 < 3 || r5 < 10)
        {
            f = false;
        }

        if(!f)
            for(ll i = 0; i < n; i++)
                cout << "Inconsistent\n";
        else
            for(ll i = 0; i < n; i++)
                cout << "Consistent\n";

        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
