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
        ll n, k;
        cin >> n >> k;
        
        vector<bool> flag(n+1, 0);
        for(ll i = n, x = 1, y = 1; i >= 1; i--,x++)
        {
            if (flag[i]) break; // Break if current index is already visited
            if(x % k == 0)
            {
                cout << y << " ";
                
                
                flag[y++] = 1;
                if(!flag[i]) {cout << i << " ";
                flag[i] = 1;
                x++;}
            }
            else
            {
                if(!flag[i])
                    cout << i << " ";
                flag[i] = 1;
            }
            
        }
        cout << nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
