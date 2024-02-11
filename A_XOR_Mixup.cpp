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
        cin >> n;
        int ans = 0, arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(i < n-1)
             ans = ans^ arr[i];
        }
        if( ans ^ arr[n-1] == arr[n-1])
        {
            cout <<arr[n-1]<<nl;
            continue;
        }
        else
        {
            ans ^= arr[n-1];
            for(ll i =0; i < n; i++)
        {
            if(ans^arr[i] == arr[i])
            {
                cout <<arr[i]<<nl;
                break;
            }
        }
        }
        
        
    }
    
    return 0;
}
    