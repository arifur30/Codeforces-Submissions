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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll cnt = 0, last = 0;
        for(ll i = 0; i < n; i++)
        {
            if(s[i] == 'B')
            {
                if(cnt == 0)
                {
                    cnt = i+1;
                }
                else
                {
                    last = i+1;
                }
            }
        }
        if(last >= cnt)
            cout<<last-cnt+1<<nl;
        else if(!last && cnt>0)
            cout<<1<<nl;

    }
    
    return 0;
}
    