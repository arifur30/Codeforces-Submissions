#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"

int digits(int n)
{
    int cnt = 0;
    while(n !=0)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ans = 0, d = digits(n);
        for(int i = 1;i<(n%10);i++)
        {
            ans += 10;
        }
        if(d == 1) ++ans;
        else if(d == 2)
            ans += 3;
        else if(d==3)
            ans += 6;
        else
            ans += 10;
        
        cout<<ans<<nl;
    }
    
    return 0;
}
    