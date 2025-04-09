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
    cin >> t;
    while (t--)
    {
        unordered_map<ll, ll> mp; // pair = key, position = value
        vector<pair<ll, ll>> ranges;

        ll n; cin >> n;
        fr(i, n)
        {
            ll x, y;
            cin >> x >> y;
            ranges.pb({x, y});
            if (x == y)
                mp[x]++;
        }

        vector<ll> hash(2 * n + 1, 0);
        for (auto it : mp)
        {
            hash[it.first]++;
        }

        for (size_t i = 1; i < hash.size(); i++)
        {
            hash[i] += hash[i - 1];
        }

        for (auto i : ranges)
        {
            ll a = i.first;
            ll y = i.second;
            bool flag = false;
            if (a == y && mp[a] == 1)
            {
                cout << 1;
                continue;
            }
            else if (a == y && mp[a] > 1)
            {
                cout << 0;
                continue;
            }

            ll diff = hash[y] - hash[a - 1];
            // cout << hash[y] << " " << hash[a-1] << " " << diff << nl;
            if (y - a + 1 > diff)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }

        cout << nl;

        // Release memory
        mp.clear();
        ranges.clear();
        hash.clear();
    }

    return 0;
}