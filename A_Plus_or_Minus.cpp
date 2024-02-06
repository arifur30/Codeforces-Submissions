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
        ll a, b , c;
        cin>>a>>b>>c;
        if(a+b == c)
        cout<<"+"<<nl;
        else 
        cout<<"-"<<nl;
    }
    
    return 0;
}
    