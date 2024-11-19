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
        ll n;
        cin >> n;
        ll arr[n];
        arrin(arr, n);
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        ll mx = arr[0], nn = 0;
        for(ll i = 0; i < n; i++)
        {
            if(arr[i] < mx)
            {
                pq.push(mx- arr[i]);
                nn++;
            }
            else
            {
                mx = arr[i];

            }
        }
        ll ans = 0, prev = 0;
        cout << " pq  " << nn << nl;
        for(ll i =0; i < pq.size(); i++)
        {
            cout << pq.top() << " ";
            if(pq.top()-prev > 0)
            {
                ans += (nn+1)*(pq.top()-prev);
                prev = pq.top();
                nn--;
                pq.pop();
            }
            else 
            {
                cout << pq.top() << " " << pq.top()-prev << nl;
                break;
            }
            

            cout << "case : " << i << " ans : " << ans << nl;
        }
        cout << ans << nl;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
