#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl



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
        string s;
        cin>>s;
        ll l = s.length();
        string rev  = s;
        reverse(rev.begin(), rev.end());  
            if(s== rev)
            {
                cout<<s<<nl;
                continue;
            }
            else if(s.compare( rev) < 0)
            {
                cout<<s<<nl;
                continue;
            }
            else if(s.compare(rev) > 0)
            {
                cout<<rev<<s<<nl;
                continue;
            }
          
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
