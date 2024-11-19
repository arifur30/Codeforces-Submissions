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
        
        string s;
        cin >> s;
        bool uniq = true;
        vll ar_0;
    //    char ch = s[0];
        for(ll i = 0; i < s.size(); i++)
        {
            if(s[i] != s[0])
            {
                uniq = false;
               // break;
            }
            if(s[i] == '0')
                ar_0.pb(i);
        }
        if(uniq)
        {
            cout << 0 << nl;
            continue;
        }
        else{
            //arrout(ar_0, ar_0.size());
            ll current = 0, cnt = 0;
            for(ll i =0; i < ar_0.size(); i++)
            {
                if(ar_0[i] == current)
                {
                    current++;
                    continue;
                }
                if(ar_0[i] > current)
                {
                    cnt += ar_0[i] - current+1;
                    current++;
                }
                
            }
            cout  << cnt << nl;

        }
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
