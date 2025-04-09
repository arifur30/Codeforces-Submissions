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
        
        ll n, k,cnt = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        size_t first = s.find("nanjing");
        while(first != string::npos)
        {
            ++cnt;
            s.erase(first, 7);
            first = s.find("nanjing");
        }
        cout << "test case " << t << " : " << cnt << nl;  
        cout << "size: " << s.size() << nl;

        if(s.size() < 7)
        {
            cout << cnt << nl;
            continue;
        }
        string temp = "";
        while(s.size() )
        {
            temp.clear();
            for(ll i = s.size()-5; i < s.size();i++)
            {
                temp.push_back(s[i]);
            }
            s.erase(s.size()-5, 4);
            for(ll i = 0; i < 4; i++)
            {
                temp.push_back(s[i]);
            }
            s.erase(0,4);
            first = temp.find("nanjing");
            if(first != string::npos) cnt++;

        }
        cout << cnt << nl;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
