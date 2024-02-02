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
    
    ll n , m , a, b, ans = 0;
    cin >> n >> m >> a >> b;
    bool flag = true;
    if(b > m*a)
        flag = false;
    if(flag)
    {
        ans += (n/m)*b;
        n %= m;
        if(n*a > b)
            ans += b;
        else
            ans += n*a;
    }
    else
        ans = n*a;
    cout << ans << nl;
    return 0;
}
    