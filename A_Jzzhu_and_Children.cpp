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

void cin_v_int(vector<ll>&v)
{
    int temp;
    cin>>temp;
    v.push_back(temp);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m,ans, prev = 0;

    cin >> n >> m;
    ans = n;
    vector<pair<ll,ll>> arr;
   fr(i,n)
    {
        ll x;
        cin >> x;
        arr.push_back(make_pair(x,i+1));

    }
    fr(i, arr.size())
    {
        if(arr[i].first > m)
        {
            arr.pb(make_pair(arr[i].first - m, arr[i].second));
        }
    }
    cout <<arr[arr.size() - 1].second<< nl;
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
