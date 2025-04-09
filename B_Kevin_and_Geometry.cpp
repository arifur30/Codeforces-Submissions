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
        
        ll n,p1,p2,x; cin >> n;
        map <ll,ll> mp;
        vll lessthan2arr;
        bool flag1 = false, f2 = false;
        fr(i,n)
        {
            cin >> x;
            if(mp[x] == 1) 
                if(!flag1) flag1 = true, p1 = x;
                else f2 = true, p2 = x;
            mp[x]++;

            
        }

        for(auto i: mp)
        {
            if(i.second > 2 && i.second % 2 != 0)
            {
                lessthan2arr.push_back(i.first);
                i.second--;
            }
            
            if(i.second < 2) 
                lessthan2arr.push_back(i.first);
        }

        if(!flag1 && !f2) {
            cout << -1 << nl;
            continue;
        }
        
        
        else if(flag1 && f2)
        {
            cout << p1 << " " << p1 << " " << p2 << " " << p2 << nl;
        }
        else if(flag1 && lessthan2arr.empty())
        {
            
            
                cout << p1 << " " << p1 << " " << p1 << " " << p1 << nl;
            
            
        }

        else if(flag1 && !f2)
        {
            
            for(size_t i = 0; i < lessthan2arr.size() - 1; i++)
            {
                if(2*p1 > abs(lessthan2arr[i] - lessthan2arr[i+1]))
                {
                    cout << lessthan2arr[i] << " " << lessthan2arr[i+1] << " " << p1 << " " << p1 << nl;
                    f2 = true;
                    break;
                }
            }
            if(!f2) cout << -1 << nl;
        
        }

        

        

    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
