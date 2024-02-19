#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" "



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
        cin>>n;
        string s;
        cin>>s;

        ll ans = 0, cnt = 0;
        for(ll i = 0; i < n; i++)
        {
            if(s[i] == '*')
                cnt++;
            if(cnt == 2)
                break;
            if(s[i] == '@')
            {
                ans++;
                cnt = 0;
            }
            else if(s[i] == '.')
            {
                cnt = 0;
                continue;
            }
        }
        cout<<ans<<nl;
    }
    
    return 0;
}






// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
