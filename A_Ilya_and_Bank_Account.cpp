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
    
    string s;
    cin >> s;
    if(s[0] != '-')
        cout<<s<<nl;
    else
    {
        if(s[s.size() - 1] < s[s.size()-2])
        {
            s[s.size()-2] = s[s.size() - 1];
            s.pop_back();
            
        }
        else
        {
            s.pop_back();
        }
        if(s == "-0")
            cout<<0<<nl;
        else
            cout<<s<<nl;
    }
    
    return 0;
}
    