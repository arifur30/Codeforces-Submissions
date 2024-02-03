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
        ll n,m,evensum = 0, oddsum = 0,ignore = 0;
        cin>>n;
        bool flag = false;
        m = n/2;
        evensum = m*(m+1);
        if(m*m == evensum)
        {
            flag = true;
        }
        else if(((m+1)*(m+1) - evensum )% 2 == 1)
        {
            flag = true;
            ignore = (m+1)*(m+1) - evensum;
        }
        if(flag)
        {
            cout<<"YES\n";
            for(ll i=2,j=1; j<=m; j++, i +=2)
            {
                cout<<i<<" ";
            }
            for(ll i=1,j=1; j<=m; j++, i +=2)
            {
                if(i == ignore)
                {
                    i += 2;
                }
                cout<<i<<" ";
            }
            cout<<nl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
    
    return 0;
}
    