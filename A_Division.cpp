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
        if(n <= 1399)
            cout<<"Division 4\n";
        else if(n >= 1400 && n <= 1599)
            cout<<"Division 3\n";
        else if(n >= 1600 && n <= 1899)
            cout<<"Division 2\n";
        else
            cout<<"Division 1\n";
    }
    
    return 0;
}
    