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
        ll n = s.size();
        if(n&1)
            NO;
        else
        {
            string s1 = s.substr(0,n/2);
            string s2 = s.substr(n/2,n);
            //cout<<s1<<" "<<s2<<nl;
            if(s1 == s2)
                YES;
            else
            {
                NO;
            }
        }   
    }
    
    return 0;
}
    