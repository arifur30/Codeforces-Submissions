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
        ll n, mn = 1000,mn_i, mx = 0, mx_i;
        cin>>n;
        vll arr(n);
        fr(i,n)
        {
            cin >> arr[i];

            (arr[i] > mx) ? mx = arr[i], mx_i = i : mx = mx;
            (arr[i] < mn) ? mn = arr[i], mn_i = i : mn = mn;

        } 
        ll l = -1, r = n; 
        if(mx_i - l <= r-  mx_i && mn_i - l <= r - mn_i)
        {
            cout<<max(mx_i - l, mn_i - l)<<nl;
        }
        else if(mx_i - l >= r-  mx_i && mn_i - l >= r - mn_i)
        {
            cout<<max(r-mx_i, r-mn_i)<<nl;
        }
        
        else if(mx_i - l <= r-  mx_i && mn_i - l >= r - mn_i)
        {
            if(abs(mx_i - mn_i) == 1)
                cout<<min(max(mx_i, mn_i) - l, r- min(mx_i, mn_i))<<nl;
            else
                cout<<mx_i - l + r - mn_i<<nl;
        }
        else if(mx_i - l >= r-  mx_i && mn_i - l <= r - mn_i)
        {
            if(abs(mx_i - mn_i) == 1)
                cout<<min(max(mx_i, mn_i) - l, r- min(mx_i, mn_i))<<nl;
            else
            cout<<mn_i - l + r - mx_i <<nl;
        }

        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
