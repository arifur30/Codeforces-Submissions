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
        if(n<2020)
        {
            NO;
            continue;
        }
        else
        {
            ll cnt = n/2020;
            ll rem = n%2020;
            if(rem <= cnt)
                YES;
            else
                NO;

        }
    }
    
    return 0;
}
    