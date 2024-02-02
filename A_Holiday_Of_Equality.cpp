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
    
    ll n;
    cin>>n;
    ll a[n];
    for(ll i =0;i<n;i++)
        cin>>a[i];
    ll m = *max_element(a,a+n), cnt = 0;
    for(ll i =0;i<n;i++)
        cnt += m-a[i];
    cout<<cnt<<nl;

    
    return 0;
}
    