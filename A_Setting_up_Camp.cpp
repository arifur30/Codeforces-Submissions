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
#define pb push_back
#define vll vector<ll>


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll a, b, c, cnt;
        cin>>a>>b>>c;
        cnt = a;
        if(b %  3 == 0)
        {
            cnt += (b/3);
        }
        if(b % 3 != 0)
        {
            int tem = ceil(b/3.0)*3 - b;
           // cout<<"TEm "<<tem<<nl;
            if(c >= tem)
            
            {
                cnt += (b/3) + 1;
                c -= tem;
            }
            else
            {
                cout<<-1<<nl;
                continue;
            }
        }
        cnt += c /3;
        c %= 3;
        if( c > 0) ++cnt;
        cout<<cnt<<nl;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
