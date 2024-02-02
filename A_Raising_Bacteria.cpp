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
    if(t%2 == 0)
        cout<<1<<nl;
    else
        cout<<(t%2)+1<<nl;
    
    return 0;
}
    