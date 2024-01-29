#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        ll n = s.length(), cnt = 0;
        if(n == 1)
        {
            if(s[0] == '_')
                cout<<2<<nl;
            else
                cout<<1<<nl;
        }
        else if(n == 2)
        {
            if(!s.compare("__") )
                cout<<3<<nl;
            else if(!s.compare("^^"))
                cout<<0<<nl;
            else if(!s.compare("_^"))
                cout<<1<<nl;
            else if(!s.compare("^_"))
                cout<<1<<nl;
        }
        else{
            if(s[0] == '_')
                cnt++;
            if(s[n - 1] == '_')
                cnt++;
            for(ll i = 0; i < n - 1; i++)
            {
                if(s[i] == '_' && s[i + 1] == '_')
                    cnt++;
            }  
        cout<<cnt<<nl;
        }
    }
    
    return 0;
}
    