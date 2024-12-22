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
        
        ll n, p,cost = 0, cnt = 1;
        cin >> n >> p;
        
        vector<pair<ll,ll>> ba(n); // {b,a} = {cost, people}
        fr(i,n) 
            cin >> ba[i].second;
        fr(i,n)
        {
            cin >> ba[i].first;
            ba[i].first = min(ba[i].first, p);
        }
        sort(ba.begin(), ba.end());
        
        // for(auto i: ba)
        // {
        //      cout << i.first << " " << i.second << nl;
        //  }
        cost = p; // first
        fr(i,n)
        {
            if(cnt+ba[i].second <= n)
            {
                cnt += ba[i].second;
                cost += ba[i].second*ba[i].first;
                if(cnt == n)
                break;
            }
            
            

            else if(cnt + ba[i].second > n)
            {
                cost += (n-cnt)*ba[i].first;
                cnt = n;
            //    cout << "cnt: " << cnt << " cost: " << cost << nl;

                break;
            }

            
        }
        

        if(cnt != n)
        {
            cost += (n-cnt)*p;
        }
        cout << cost << nl;

    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
