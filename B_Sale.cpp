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
    cout.tie(0);
    
    ll n , m;
    cin>>n>>m;
    int arr[n];
    for(ll i = 0; i < n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    ll sum  = 0;
    for(ll i = 0; i < m;i++)
        if(arr[i] <= 0)
            sum += abs(arr[i]);
    cout<<sum<<nl;  
    
    return 0;
}
    