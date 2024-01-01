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
        char ans = 'A';
        
        for(int i = 0; i<3;i++)
        {
            cin>>s;
            //cout<<s<<nl;
            if(s[0]+s[1]+s[2] != 198)
                ans = 261 - s[0]-s[1]-s[2];
            
        }
        cout<<ans<<nl;
        
        
    }
    
    return 0;
}
    