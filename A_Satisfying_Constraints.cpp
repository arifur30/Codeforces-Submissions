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


void cout_v_int(vector<ll> &v)
{
    for(auto it = v.begin(); it != v.end(); it++) 
    {
        cout << *it <<" ";   // for printing the vector
    }
    cout<<'\n';
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
        ll n, a, x, mn = INT_MIN, mx = INT_MAX;
        cin>>n;
        vll cancelled;
        for(int i = 0; i < n; i++)
        {
            cin >> a >> x;
            if(a == 1)
                mn = max(mn, x);
            else if(a == 2)
                mx = min(mx, x);
            else
                cancelled.pb(x);
        }
        sort(all(cancelled));
     //   cout_v_int(cancelled);
        
        ll cnt_cancelled = lower_bound(all(cancelled), mn) - cancelled.begin();
        ll up = upper_bound(all(cancelled), mx) - cancelled.begin();
        //cout<<cnt_cancelled<<" " << up<<nl;
       // cout<<"min max: "<< mn<<" "<<mx<<nl;
       cout<<max(0ll,mx-mn+1-up+cnt_cancelled)<<nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
