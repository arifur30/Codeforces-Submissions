#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr,b, n) for(ll i = 0; i < n; i++) {cin>>arr[i];b[i] = arr[i];}
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    ll arr[n], b[n];
    arrin(arr,b, n);
    vector<pair<ll, ll>> ans;
    sort(arr, arr + n);
    for(ll i = 0; i<n;i++)
    {
        if(ans.size() == n)
            break;
        if(arr[i] != b[i])
        {
            for(ll j = i+1; j <n; j++)
            {
                if(arr[i] == b[j])
                {
                    swap(b[i], b[j]);
                    ans.push_back({i, j});
                    break;
                }
            }
        }
    }
    if(ans.size())
    {
        cout<<ans.size()<<nl;
        for(auto it: ans)
        {
            cout<<it.first<<" "<<it.second<<nl;
        }
    }
    else
    {
        cout<<0<<nl;
    }
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
