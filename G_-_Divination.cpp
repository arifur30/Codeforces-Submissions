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


const int N = 1e5+10;
vector<int> adj[N];
set<int>current;
vector<vector<int>> connected;


bool vis[N];

int dfs(int v, map<int,bool> &mp)
{
    int cnt = 0;
    if(mp[v] == false)
    {
        cnt++;
        mp[v] = true;
    }    
    current.insert(v);
    for(auto child: adj[v])
    {
        
        cnt = max(cnt, dfs(child,mp));
        
    }
    
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i = 1; i <=n ; i++)
    {
        int x;
        cin >> x;
        for(int j = 1; j <= x; j++)
        {
            int temp;
            cin >> temp;
            adj[i].push_back(temp);
        }
    }

    cout << "adj: " << nl;
    for(int i = 1; i <= 4; i++)
    {
        for(auto it: adj[i]) cout << it << " ";
        cout << nl;
    }


    for(int i = 1; i <= n; i++)
    {
        map<int, bool> mp;
        int cnt = 0;     
        current.clear();
        
        cnt = dfs(i, mp);
        //connected.push_back(current);
        cout <<"cnt: " << i << " " << current.size() <<nl; 
    }

    // cout << connected.size() << nl;
    // for(auto it : connected)
    // {
    //     for(auto i: it)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << nl;
    // }

    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
