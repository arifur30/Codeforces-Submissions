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
        ll n = s.length();
        ll cnt0 = 0, cnt1 = 0, l = 0;
        for(ll i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                cnt0++;
            }
            else{
                cnt1++;
            }
        }
        for(ll i = 0; i < n;i++)
        {
            if(s[i] == '0')
            {
                if(cnt1 > 0)
                {
                    cnt1--;
                    l++;
                }
                else    break;
            }
            else{
                if(cnt0>0)
                {
                    cnt0--;
                    l++;
                }
                else break;
            }
        }
        cout<<n-l<<nl;
        
    }
    
    return 0;
}
    