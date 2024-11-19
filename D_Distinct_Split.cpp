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
        
        ll n, res = 0, cnt2 = 0,cnt1 = 0;
        cin >> n;
        string s;
        cin >> s;
        map < char, ll > mp1, mp2;
        fr(i,n)
        {
            mp1[s[i]]++;
            if(mp1[s[i]] == 1)
            {
                cnt1++;
            }
        }
        
        for(ll i = n-1; i >=0; i--)
        {
            mp1[s[i]]--;
            if(mp1[s[i]] == 0)
            {
                cnt1--;
            }
            mp2[s[i]]++;
            if(mp2[s[i]] == 1)
            {
                cnt2++;
            }
            res = max(res, cnt1 + cnt2);
        }
        cout << res << nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
