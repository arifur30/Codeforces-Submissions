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
        ll n, cnt1 = 0 , cnt2 = 0;
        cin>>n;
        char ch = '#', tem = '#';
        for(ll i = 0; i < 2*n; i++)
        {
           // cout<<"Line "<<i+1<<": "<<ch << " "<<tem<<nl;
            cnt1++;
            for(ll j = 0; j < 2*n; j++)
            {
                

                cout<<ch;
                cnt2++;
                if(cnt2 == 2 && ch == '#')
                    ch = '.', cnt2 = 0;
                else if(cnt2 == 2 && ch == '.')
                    ch = '#', cnt2 = 0;
            }
            cout<<nl;
            ch = tem;
            if(cnt1 == 2 && ch == '#')
            {
                ch = '.';
                cnt1 = 0;
                tem = ch;
            }
            else if(cnt1 == 2 && ch == '.') 
            {
                ch = '#';
                tem = ch;
                cnt1 = 0;
            }
            else ch = tem;
            
        }
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
