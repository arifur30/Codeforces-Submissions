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
        ll n,cnt = 0;
        cin>>n;
        string s;
        cin>>s;
        for(ll i = 0; i < n-2; i++)
        {
            if(s[i] == 'p' and s[i+1] == 'i' and s[i+2] == 'e')
               {   
                    cnt++;
                    i+=2;
               }
            else if(s[i] == 'm' and s[i+1] == 'a' and s[i+2] == 'p')
                { 
                    cnt++;
                     i+=2;
                }
                  
        }
        if(cnt)
            cout<<cnt<<nl;
        else
            cout<<0<<nl;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
