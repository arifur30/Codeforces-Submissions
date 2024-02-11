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
        ll n ;
        cin>>n;
        ll arr[n], alp[27] = {0};
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for(ll i = 0; i <n; i++)
        {
            ll a = 1;
            if(arr[i] == alp[a])
            {
                cout<<char(a+96);
                alp[a]++;
            }
            else
            {
                while(alp[a] != arr[i])
                    a++;
                cout<<char(a+96);
                alp[a]++;
            }
        }
    cout<<nl;
    }
    
    return 0;
}
    