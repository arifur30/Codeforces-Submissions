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
    
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    ll sum = 0;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i] == '1')
            sum += a;
        else if(s[i] == '2')
            sum += b;
        else if(s[i] == '3')
            sum += c;
        else
            sum += d;
    }
    cout<<sum<<nl;
    
    return 0;
}
    