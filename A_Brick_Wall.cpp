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
        ll n , m, cnt = 0;
        cin>>n>>m;
        if(m % 2 == 0)
        {
            cnt = n* (m/2);
        }
        else
        {
            m -= 3;
            cnt++;
            cnt += m/2;
            cnt = cnt*n;
        }
        cout<<cnt<<nl;
    }
    
    return 0;
}
    