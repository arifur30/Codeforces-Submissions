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
        int n , k;
        cin>>n>>k;
        for(int i = 0; i < n*k;)
        {
            for(int j = 97; j < (97+k); j++)
            {
                cout<<char(j);
                i++;
            }
        }
        cout<<nl;
    }
    
    return 0;
}
    