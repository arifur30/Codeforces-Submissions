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
    
    ll n , t,x = 1;
    cin>>n>>t;
    ll a[n+1];
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }

    while(x < t)
    {
        x += a[x];
    }
    if(x == t)
        YES;
    else
        NO;
    return 0;
}
    