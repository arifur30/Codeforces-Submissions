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
        if(n&1)
            YES;
        else
        {
            while(n%2 == 0)
            {
                n /= 2;
            }
            if(n == 1)
                NO;
            else
                YES;
        }
    }
    
    return 0;
}
    