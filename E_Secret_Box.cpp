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


ll a, b, c, k;

ll good(ll &x, ll &y)
{
    if(x / y == 0) return 0;
    else
    {
        return ceil((double)x/y);
    }
}

ll mx_ans(ll p, ll q, ll r)
{
    ll a1 = good(a,p) * good(b,q) * good(c,r);
    ll a2 = good(a,q) * good(b,r) * good(c,p);
    ll a3 = good(a,r) * good(b,p) * good(c,q);

    return max(a1, max(a2, a3));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   // for(auto it: allprime) cout << it << " ";

    ll t;
    cin>>t;
    while (t--)
    {
      //  ll a, b, c, k;
        cin >> a >> b >> c >> k;
        vll p;
        int cnt = 0;
        if(k == 1)
        {
            cout << mx_ans(1ll,1ll,1ll) <<nl;
            continue;
        }
        if(prime[k])
        {
            cout << mx_ans(k,1ll,1ll) <<nl;
        }
        else
        {
            ll prev;
            bool f = false;
            for(auto it: allprime)
            {
               
                if(prime[k])
                {
                    p.pb(k);
                    cnt++;
                    while(cnt != 3)
                        p.pb(1), cnt++;
                    break;
                }
                if(f)
                {
                    if(k % prev == 0)
                    {
                        p.pb(prev);
                        k /= prev;
                        cnt++;
                    }
                    else f = false;
                }
                if(k % it == 0)
                {
              //      cout << it << " it" <<nl;
                    p.pb(it);
                    k /= it;
                    cnt++;
                    f = true;
                    prev = it;
                }
                
                
                if(cnt == 3)
            {
                break;
            }
            }
          //  cout << p[0] << " " << p[1] << " " << p[2]<< nl; 
            cout << mx_ans(p[0],p[1],p[2]) <<nl;

            
        }

        
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
