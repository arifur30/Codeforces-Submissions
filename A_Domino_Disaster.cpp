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
        string a, b = "";
        int n;
        cin>>n>>a;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 'U')
            {
                b += 'D';
            }
            else if(a[i] == 'D')
            {
                b += 'U';
            }
            else
            {
                b += a[i];
            }
        }
        cout<<b<<nl;
    }
    
    return 0;
}
    