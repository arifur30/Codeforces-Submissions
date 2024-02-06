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
        ll arr[n], even = 0, odd = 0;
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2 == i%2)
                continue;
            else if(arr[i] & 1 == 1 && i % 2 == 0)
                odd++;
            else if(arr[i]%2 == 0 && i&1)
                even++;
        }
        if(even == odd)
            cout<<even<<nl;
        else cout<<-1<<nl;
    }
    
    return 0;
}
    