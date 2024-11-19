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
std::unordered_map<int, std::vector<int>> storeIndices(const std::vector<int>& arr) {
    std::unordered_map<int, std::vector<int>> indices;
    for (int i = 0; i < arr.size(); i++) {
        indices[arr[i]].push_back(i);
    }
    return indices;
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
        int n, m;
        cin >> n;
        vector<int> orig(n), b(n);
        arrin(orig, n);
        arrin(b, n);
        unordered_map<int, int> mp;
        cin >> m;



        auto indices = storeIndices(arr);

// Now you can access the indices of any element like this:
        for (int index : indices[2]) {
            std::cout << index << " ";
}
        set <int > s;
        bool f = true;
        for(int i = 0; i < n; i++)
        {
            if(orig[i] == b[i])
                continue;
            else
            {
                if(mp[b[i]] > 0)
                {
                    mp[b[i]]--;
                }
                else
                {
                    NO;
                    f = false;
                    break;
                }
            }
        }
        if(f)
            YES;

    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
