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
        ll n;
        cin>>n;
        bool flag = true;
        string s = to_string(n);
        fr(i, s.size())
        {
            if(s[i] != '1' && s[i] != '0')
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            YES;
            continue;
        }
        else{
            double ans = log(n)/log(11);
            if((int)ans == ans)
            {
                YES;
                continue;
            }
            
            if(n%2 != 0 &&  n % 11 == 0 )
            {
                flag = true;
                s = to_string(n / 11);
             //   cout<<s<<nl;
                fr(i, s.size())
                {
                    if(s[i] != '1' && s[i] != '0')
                    {
                        flag = false;
                        break;
                    }
                }
                (flag) ? YES : NO;
            }

            else
                NO;
        }
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .