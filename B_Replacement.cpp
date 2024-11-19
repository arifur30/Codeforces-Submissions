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
        ll n, one = 0, zero = 0,  cnt  = 0;
        cin >> n;
        string s, r;
        cin >> s >> r;
       
       fr(i, s.size())
       {
            if(s[i] == '1') one++;
            else zero++;
       }
       if(one && !zero || zero && !one){
        NO; continue;
       }

        fr(i, r.size())
        {
            if(!one || !zero) break;
            if(r[i] == '1')
            {
                if(zero > 0)
                {
                    zero--;
                    cnt++;
                }
                else
                {
       
                    break;
                }
            }
            else
            {
                if(one > 0)
                {
                    one--;
                    cnt++;
                }
                else
                {
              
                    break;
                }
            }
        }
    //    cout << one << " " << zero << " " << cnt << nl;
        if(cnt == n-1 && one +zero == 1)
            YES;
        else NO;
    
    
    
}

}



// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
