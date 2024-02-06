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
        ll ar[27] = {0}, n;
        cin>>n;
        string s;
        cin>>s;
        bool flag = true;
        ar[s[0] - 64]++;
        for(ll i = 1; i < s.size(); i++)
        {
            if(s[i] == s[i-1])
            {
                ar[s[i] - 64]++;
            }
            else
            {
                
                if(ar[s[i] -64]++ > 0)
                {
                    flag = false;
                    NO;
                    break;
                }
            }

        }
        if(flag)    YES;

    }
    
    return 0;
}
    