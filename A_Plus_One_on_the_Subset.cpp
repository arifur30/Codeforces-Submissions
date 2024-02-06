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
        ll arr[n];
        for(ll i= 0; i < n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        cout<<arr[n-1]-arr[0]<<nl;
    }
    
    return 0;
}
    