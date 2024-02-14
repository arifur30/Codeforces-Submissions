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
        ll arr[n], cnt1 = 0 , cnt2 = 0;
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] == 1) cnt1++;
            else cnt2++;
        }
        if(cnt1&1)
            NO;
        else if(cnt2&1 && cnt1 < 2)
            NO;
        else
            YES;
        
    }
    
    return 0;
}
    