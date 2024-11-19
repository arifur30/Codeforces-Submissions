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
        int n, k, cnt = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int > mp;
        for(int i = 0; i< n; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                if(mp[s[i] + 32] > 0)
                {
                    cnt++;
                    mp[s[i] + 32]--;
                }
                else mp[s[i]]++;
            }
            else 
            {
                if(mp[s[i] - 32] > 0)
                {
                    cnt++;
                    mp[s[i] - 32]--;
                }
                else mp[s[i]]++;
            }
        }
        
        for(auto i: mp)
        {
          //  cout << i.first << " " << i.second << " ";
            if(!k) break;
            
            if(i.second >= 2)
            {
                int temp;
                cnt += temp = min(k, i.second/2);
                k -= temp;
            }
         //   cout << cnt << nl;
        }
        cout << cnt << nl;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
