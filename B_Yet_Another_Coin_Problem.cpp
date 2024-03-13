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
        ll n, cnt = 0;
        cin>>n;

        if(n >= 15)
        {
            cnt += n/15;
            n %= 15;
           // ++cnt;
        }
        if(n >= 10)
        {
            cnt += n/10;
            n %= 10;
        }
        if(n >= 6)
        {
            cnt += n/6;
            n %= 6;
            
        }
        if(n >= 3)
        {
            
            cnt += n/3;
            n %= 3;
        }
        if(n >= 1)
        {
            
            
            
            cnt += n/1;
            n %= 1;
        }
        if(n >= 0)
        {
            cnt += n;
            cout<<cnt<<nl;
            continue;
        }
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
