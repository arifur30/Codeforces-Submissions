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
    map<string, ll> m;
    while (t--)
    {
        string s;
        cin>>s;
        if(m.find(s) == m.end())
        {
            m[s] = 0;
            cout<<"OK\n";
        }
        else
        {
            cout<<s<<++m[s]<<nl;
           // m[s] = to_string(stoi(m[s])+1);

        }
            
    }
    
    return 0;
}
    