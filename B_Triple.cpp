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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        map<ll,ll> mp;
        ll n, tem;
        cin>>n;
        fr(i,n)
        {
            cin>>tem;
            mp[tem]++;
        
        }
        bool f = false;
        for(auto it: mp)
        {
            if(it.second >= 3)
            {
                cout<<it.first<<nl;
                f = true;
                break;
            }
        }
        if(!f)
            cout<<-1<<nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
