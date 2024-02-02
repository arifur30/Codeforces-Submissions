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
    cin >> n;
    ll l = 0  , r = n-1;
    ll a[n];
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    ll sereja = 0 , dima = 0;
    bool flag = true;
    for(ll i = 1; i <= n; i++)
    {
        if(flag)
        {
            if(a[l]>a[r])
            {
                sereja += a[l];
                l++;
            }
            else
            {
                sereja += a[r];
                r--;
            }
            flag = false;
        }
        else{
            if(a[l]>a[r])
            {
                dima += a[l];
                l++;
            }
            else
            {
                dima += a[r];
                r--;
            }
            flag = true;
        }
    }
    cout<<sereja<<" "<<dima<<nl;
    return 0;
}
    