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
        ll n, temp; cin >> n;
        vll a(n+1);
        vector<bool> happy(n+1, 0);
        for(ll i = 1; i <= n; i++)
            cin >> a[i];  
        string s;
        cin >> s;

        for(ll i = 0; i < n; i++)
        {
            if(s[i] == '1')
                happy[i+1] = true;
        }

        // for(auto x: happy)
        //     cout << x << " ";


        bool f = true;
        
        for(ll i = 1, j = 1; i <= n; i++)
        {
            if(happy[i] && a[j] == i)
            {
                j++;
            }
            else if(!happy[i] && a[j] != i)
            {
                if(happy[a[j]] == false)
                    j++;
                else continue;
            }
            else if(!happy[i] && a[j] == i)
                continue;
            else
            {
                f = false;
         //       cout<<nl<<a[j] << " " << i << " " << happy[i] << nl;
                break;
            }
        }
        if(f)
            YES;
        else
            NO;

    } 
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
