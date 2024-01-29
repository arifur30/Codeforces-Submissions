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
        vector<ll> v(n);
        ll min = INT_MAX, max = INT_MIN;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            
        }
        vector<ll>v2 = v;
        bool flag = true;
        sort(v2.begin(), v2.end());
        for(ll i = 0; i < n; i++)
        {
            if(v[i]%2 != v2[i]%2)
            {
                flag = false;
                NO;
                break;
            }
        }
        
        if(flag)
            YES;
    }
    
    return 0;
}
    