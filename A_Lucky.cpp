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
        ll cnt1 = 0, cnt2 = 0;
        for(ll i = 0, j = 3;i<3;i++,j++)
        {
            cnt1 += (s[i] - '0');
            cnt2 += (s[j] - '0');
        }
        if(cnt1 == cnt2)
            YES;
        else
            NO;

    }
    
    return 0;
}
    