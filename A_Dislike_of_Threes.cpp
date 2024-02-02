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
    ll arr[1000];
    for(ll i = 1, j = 0; j<1000; i++)
    {
        if(i%3 == 0 || i%10 == 3)
            continue;
        arr[j++] = i;
    }

    ll t;
    cin>>t;
    while (t--)
    {
        int k;
        cin>>k;
        cout<<arr[k-1]<<nl;
    }
    
    return 0;
}
    