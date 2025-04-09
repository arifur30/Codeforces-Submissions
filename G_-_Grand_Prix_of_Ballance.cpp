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
        
        ll n , m ,q ;
        cin >> n >> m >> q;
        map<pair<ll,ll>,bool> players;
        

        vll level(n+1, m);
        vector<pair<ll,ll>>total(m+1);
        for(ll i = 1; i <= m; i++) total[i] = {0,i};
        ll active, type;
        while(q--)
        {
            cin >> type;
            if(type == 1)

            {
                cin >> active;
            }
            else if(type == 2)
            {
                ll id, x;
                cin >> id >> x;
                if(x == active)
                {
                    if(players[{id,x}] == false)
                    {
                        total[id].first += level[x]--;
                        total[id].second = id;
                        players[{id,x}] = true;
                    }
                    else
                        continue;
                }
                else
                {
                    continue;
                
                }
            }
            else if(type == 3)
            {
                ll id, x;
                cin >> id >> x;
                total[id].second = id;
                if(x == active)
                    players[{id,x}] = true;
                
                
            }
        }

        sort(all(total));

        for(ll i = m; i >= 2; i--)
        {
            if(total[i].first == total[i-1].first)
                if(total[i].second > total[i-1].second) 
                    swap(total[i], total[i-1]);
            
            else continue;
        }

        for(ll i = m; i >= 1; i--)
        {
            if(total[i].first == 0 && total[i].second == 0) continue;
            cout << total[i].second << " " << total[i].first << nl;
        }

        // for(auto i: total)
        //     cout << i.second << "  " << i.first <<nl;
        
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
