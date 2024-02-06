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
    
    ll t,team1 = 0, team2 = 0;
    cin>>t;
    string s, s1 = "", s2 = "";
    for(ll i=0; i<t; i++)
    {
        cin>>s;
        if(i == 0)
        {
            s1 = s;
            team1++;
        }
        else if(s == s1)
        {
            team1++;
        }
        else
        {
            s2 = s;
            team2++;
        }
    }
    if(team1 > team2)
        cout<<s1<<nl;
    else
        cout<<s2<<nl;
    
    return 0;
}
    