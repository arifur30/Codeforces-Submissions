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
        ll n , f, a, b, temp;
        cin>>n>>f>>a>>b;
        temp = f;
        ll arr[n];
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            
        }
        if(arr[0]*a < b)
            f -= arr[0]*a;
        else
            f -= b;
        
        for(ll i = 1; i < n; i++)
        {
            if((arr[i] - arr[i-1])*a <= b)
                f -= (arr[i] - arr[i-1])*a;
            else
                f -= b;
        }
        if(f > 0)
            cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    
    return 0;
}
    