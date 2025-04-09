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

    ll t, sum = 0, cnt = 0;
    cin>>t;

    int x;
    string s = "";
    fr(i,t)
    {
        cin >> x;
        s.push_back('0'+ x);
    }

    
    map<string, int > mp;

//    cout << s << nl;
    if(stoi(s) % 12 == 9) cnt++;
    mp[s]++;
    fr(i,t)
    {
      //  s = cp;
        fr(j,t)
        {
            //if(i == j) continue;
            
            swap(s[i], s[j]);
            mp[s]++;
            if(mp[s] == 1)
            {
                // cout << s << nl;
                    if(s[0] != '0')
                    {
                        int temp = stoi(s);
                        if(temp % 12 == 9) cnt++;
                    }
                         
            }

        }
    }

    cout << cnt << nl;
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
