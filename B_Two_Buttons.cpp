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
    
    ll n , m;
    cin>>n>>m;
    ll cnt = 0;
    if(n >= m)
    {
        cout<<n-m<<nl;
        return 0;
    }
    else{
        while(m>n)
        {
            if(m%2 == 0 )
            {
                m /= 2;
                cnt++;
            }
            else
            {
                m++;
                cnt++;
            }
        }
        cout<<cnt+n-m<<nl;
    }
    
    return 0;
}
    