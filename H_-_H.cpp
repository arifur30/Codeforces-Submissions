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

    int t, H, S;
    cin>>t >> H >> S;
    vector<pair<int, pair<int,int>>> v;
    while (t--)
    {
        int h,s,w;
        cin >> h >> s >> w;

        if(h >= H || h+s >= H+S) continue;

        v.push_back({w, {h,s}});
        
    }
    sort(all(v));

    // for(auto &i: v)
    // {
    //     cout << i.second.first << " " << i.second.second << " " << i.first << nl;
    // }

    int sum = 0;
    int mx = v[v.size()-1].first;

    for(int l = v.size()-2, r = v.size()-1; r >=0; r--)
    {
        sum += v[r].first;
      //  cout << sum << nl;
        int h = v[r].second.first,s = v[r].second.second;
        while((h + v[l].second.first < H) && (h+s+v[l].second.first+v[l].second.second< H+S) && l >= 0 && r > l)
        {
            sum += v[l].first;
            h += v[l].second.first;
            s += v[l].second.second;
            l--;
        }
        
        mx = max(mx, sum);
        sum = 0;
        
    }

    cout << mx << nl;
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
