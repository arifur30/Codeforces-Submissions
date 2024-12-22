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

ll rem(ll a, ll b)
{
    if(a < b)
        return b - a;
    else 
        return b - (a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n, k, cnt = INT_MAX,cnt_even = 0, sum = 1;
        cin>>n>>k;
        bool flag = false;
        vll arr(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum *= arr[i];
            if(arr[i] % 2 == 0) cnt_even++;
            
            if(arr[i] % k == 0)
                flag = true;
            else
            {
                cnt = min(cnt, rem(arr[i], k));
              //  cout << "arr[i] : " << arr[i] << " rem : " << rem(arr[i], k) << nl;
            } 
        }
        if(flag)
        {
            cout<<0<<nl;
            continue;
        }        
        if(k&1)
        {
        
                cout<<cnt<<nl;
        }
        else
        {
            // for 2 only one even is good
            if(k == 2)
            {
                if(cnt_even > 0)
                    cout<<0<<nl;
                else
                    cout<<1<<nl;
            }
            else
            {
                //for k == 4
                if(cnt_even >=2)
                {
                    cout << 0 << nl;
                    continue;
                }
                if(cnt_even == 1)
                {
                    if(sum % k == 0)
                    {
                        cout << 0 << nl;
                        continue;
                    }
                    else
                    {
                        cout << 1 << nl;
                        continue;
                    }
//                    continue;
                }
                for(ll i = 0; i < n; i++)
                {
                    if(arr[i]%2 != 0)
                    {
                        if((arr[i]+1)%k == 0)
                        {
                            cnt_even++;
                            break;
                        }
                    }
                }

                cout << max(0ll, 2-cnt_even) << nl; 
            }
            
            
        }
        
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
